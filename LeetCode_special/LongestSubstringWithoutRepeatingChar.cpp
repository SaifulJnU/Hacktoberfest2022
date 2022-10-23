class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);// initialising the values with -1
        int n= s.length();
        int len=0;
        int l=0;
        int r=0;
        while(r<n){
            // if the char exit in map
            if(mpp[s[r]]!=-1){
                l=max(mpp[s[r]]+1, l);
            }
            
            mpp[s[r]]=r;
            len =max(len, r-l+1);
            r++;
        }
        
        return len;
    }
};
