class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        
        sort(nums.begin(), nums.end());
//         for(int i=0 ;i<n;i++){
//             cout<<nums[i]<<" ";
//         }
//         int len=1;
//         for(int i=0 ;i<n;i++){
//             if(i+1<n)
//                 if(abs(nums[i+1]- nums[i])==1){
//                     len++;
//                 }
            
//         }
//         return len;
        
        int l=0; 
        int r=0;
        int len=0;
        while(r<n){
            
                
                if(r+1<n && (abs(nums[r+1]-nums[r])==1)){
                    r++;
                    
                }else{
                    
                    len=max(len, r-l+1);
                    
                    r++;
                    l=r;
                }
                
            
        }
        
        return len;
        
        
    }
};
