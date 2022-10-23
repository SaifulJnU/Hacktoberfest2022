class Solution {
public:
    void solve(vector<int> nums,vector<vector<int>>& ans, int index){
        if(index>= nums.size()){ //123 0
            ans.push_back(nums);
            return;
        }
        
        for(int j=index; j<nums.size();j++){
            swap(nums[index], nums[j]);//123
            solve(nums, ans, index+1);//index=3  0 1 2 
            
            // backTracking
            swap(nums[index], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n= nums.size();
        vector<vector<int>> ans;
        solve(nums,ans, 0);
        return ans;
        
    }
};
