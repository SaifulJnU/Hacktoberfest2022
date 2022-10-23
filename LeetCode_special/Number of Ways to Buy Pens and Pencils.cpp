class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
       long long  int count =0 ;
        long long int k=0; 
        long long int z=0;
        long long int p ,q;
        
        if(total<cost1 && total<cost2){
            return 1;
        }
        int t =(total/max(cost1,cost2))+1 ;
            while(t--){
                p = total - k*cost1 ;
                q = total - k*cost2;
                if(cost1>=cost2 &&p>=0){
               z = p/cost2+1;
                
                k++;
                }
                else if(q>=0){
                     z = q/cost1+1;
                k++;
                }
                if(z>=0){
                    
                count += z;
                }
            }
        return count;
        
       
    }
};