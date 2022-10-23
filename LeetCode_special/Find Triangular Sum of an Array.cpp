class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int>h;
        int k ;
        while(nums.size()>1){
        
        for(int i =0 ; i<nums.size()-1;i++){
            k = nums[i] + nums[i+1];
          
            h.push_back(k%10);
        
        
        }
            nums = h ;
            h.clear();
        }
        return nums[0];
        
    }
};