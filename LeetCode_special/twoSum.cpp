class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> temp=nums;
        vector<int> ans;
        int n=nums.size();
        int i=0;
        int j=n-1;
        sort(nums.begin(), nums.end());
        while(i<=j){
            
            int sum=nums[i]+nums[j];
            // cout<<sum<<endl;
            if(sum==target){
                ans.push_back(nums[i]);
                ans.push_back(nums[j]);
                break;
            }else if(sum>target){
                j--;
            }else if(sum<target){
                i++;
            }
            
            
        }
        
        vector<int> final(2);
        // cout<<ans[0]<<endl;
        // cout<<ans[1]<<endl;
        int k;
        for(int i=0 ;i<n;i++){
            if(temp[i]==ans[0]){
                cout<<i;
                final[0]=i;
                k=i;
            }
        }
        
        for(int i=0 ;i<n;i++){
            
            if(temp[i]==ans[1]&& k!=i){
                cout<<i;
                final[1]=i;
               
            
        }
        }
        
        return final;
        
    }
};
