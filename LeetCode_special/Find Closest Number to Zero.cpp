class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();
        int count =110000;
        int ans ;
        for(int i =0 ; i<n ; i++){
            int z = nums[i]-0;
            if( abs(z)<count){
                ans = nums[i];
                // cout<<ans<<"//"<<endl;
                count = abs(z);
            }
            else if(abs(z)==count){
                ans= max(ans,z);
            }
        }
        return ans ;
    }
};