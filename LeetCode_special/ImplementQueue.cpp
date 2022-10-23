class Queue {
    int *arr; 
    int qfront;
    int rear;
    int size;
    
public:
    Queue() {
        // Implement the Constructor
        size=1000001;
        arr= new int[size];
        qfront=0;
        rear=0;
    }

    

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront==rear){
            return true;
        }else{
            return false;
        }
    }

    void enqueue(int data) {
        // check if it is full
        if(rear==size){
            cout<<"Queue is full";
        }else{
            arr[rear]=data;
            rear++;
        }
        
    }

    int dequeue() {
        // Implement the dequeue() function
        
        //check whether it is empty
        if(rear==qfront){
            return -1;
        }else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront==rear){
            return -1;
        }else{
             int ans=arr[qfront];
             return ans;
        }
       
    }
};
