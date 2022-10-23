class Solution {
public:
    bool find(vector<int> nums, int s, int e,int num){
        if(s>e){
            return false;
        }
        int mid= s+(e-s)/2;
        if(nums[mid]==num){
            return true;
        }
        
        if(nums[mid]>num){
            return find(nums,s,mid-1,num);
        }else{
            return find(nums,mid+1,e,num);
        }
    }
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //SORT + 3PTR+ BS+hash
        
        vector<vector<int>> final;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0 ;i<n;i++){
           for( int j=i+1; j<n-2; j++){
               vector<int>ans;
               for(int k=j+1; k<n-3;k++){
                   int preSum= nums[i]+nums[j]+nums[k];
                   int rem=target-preSum;
                   cout<<rem<<endl;
                   
                   bool flag=find(nums,k+1,n,rem );
                   // cout<<flag;
                   // if(flag){
                   //     ans.push_back(nums[i]);
                   //     ans.push_back(nums[j]);
                   //     ans.push_back(nums[k]);
                   //     ans.push_back(rem);
                   //     // break;
                   //  }
               }
               
               final.push_back(ans);
               
           }
        }
        
        return final;
    }
};
    
