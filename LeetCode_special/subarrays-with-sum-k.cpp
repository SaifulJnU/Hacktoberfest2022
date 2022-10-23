class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> ps(nums.size());
        ps[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ps[i]=ps[i-1]+nums[i];
        }
        
        map<int,int>m;
        m[0]=1;
        int ans=0;
        for(int i=0;i<ps.size();i++){
            int d=ps[i]-k;
            if(m.find(d)!=m.end()){
                ans+=m[d];
                m[ps[i]]++;
            }else{
                m[ps[i]]++;
            }
        }
        
        return ans;
    }
};
