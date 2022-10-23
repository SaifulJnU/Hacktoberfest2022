class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hashSet(nums.begin(),nums.end());// YRR YE BOHOT MAST CHEEZ H..IT TAKES LESS COMPLEXITY AS COMPARED TO HAVING LOOPS AND INSERTING ELEM
//         for(int i=0 ;i<nums.size();i++){
//             hashSet.insert(nums[i]);
//         }
        
        int longLen=0;
        for(int i=0 ;i<nums.size();i++){
            
            if(!hashSet.count(nums[i]-1)){
                int currlen=1;// bcoz tune ek number toh consider kar liya h naa ..tu or dhundne gyi h
                int currNum=nums[i];
                while(hashSet.count(currNum+1)){
                    currlen++;
                    currNum++;
                }
                
                longLen=max(longLen, currlen);
            }
            
            
        }
        
        return longLen;
        
        
//         unordered_set<int>s(nums.begin(),nums.end());
//         int ans =0;
        
//         for(int i =0 ; i<nums.size();i++){
//             int curr=0;
//             if(s.count(nums[i]-1)==false){
//                 curr=1;
//                 int t = nums[i];
//                 while(s.count(t+1)==true){
//                     t=t+1;
//                     curr=curr+1;
//                 }
                
//                 ans = max(ans,curr);
//             }
//         }
//         return ans;
        
        
        
    }
};
