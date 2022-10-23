class NQueue{
    int *arr;
    int *next;
    int *front;
    int *rear;
    int freeSpot;
    int s;
    int n;
    
public:
    
    NQueue(int n, int s){
        n=n;
        s=s;
        arr= new int[s];
        front=new int[n];
        rear=new int[n];
        for(int i=0;i<n;i++){
            front[i]=-1;
            rear[i]=-1;
        }
        next= new int[s];
        for(int i=0 ;i<n;i++){
            next[i]=i+1;
        }
        
        next[s-1]=-1;
        freeSpot=0;
    }
    
    
    

    // Enqueues 'X' into the Mth queue. Returns true if it gets pushed into the queue, and false otherwise.
    bool enqueue(int x, int m){
        
        // cheking if there is space or not
        // overflow condition 
        if(freeSpot==-1){
            return false;
        }
            int index=freeSpot;
            
            freeSpot=next[index];
            
            if(front[m-1]==-1){// pehla elem push horha h
                front[m-1]=index;
                
            }else{// not a first elem
                next[rear[m-1]]=index;
                
            }
            next[index]=-1;
            
            
            rear[m-1]=index;
            arr[index]=x;
            
            
        
        return true;
    }
    
    

    
    int dequeue(int m){
        // check if queue is empty 
        if(front[m-1]==-1){
            return -1;
        }else{
            int index= front[m-1];
            int elem=arr[index];
            front[m-1]=next[index];
            next[index]=freeSpot;
            freeSpot=index;
            return elem;
            
        }
        
        
    }
};
