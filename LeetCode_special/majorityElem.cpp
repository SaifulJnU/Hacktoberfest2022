class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N=nums.size();
        int n= ceil(N/2);
        
        map<int,int>map;
        for(int i=0 ;i<N;i++){
            map[nums[i]]++;
        }
        
        
        for(auto i:map){
            int k= i.second;
            if(k>n){
                return i.first;
                break;
            }
        }
        
        return nums[0];
        
    }
};
