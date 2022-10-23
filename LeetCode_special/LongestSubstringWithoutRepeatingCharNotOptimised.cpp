class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        
        
        int i=0; 
        int j=i;
        string str;
        string empty;
        vector<string>v;
        while(i<n){
            cout<<s[i]<<endl;
            size_t found = str.find(s[i]);
            if (found == string::npos){
                str+=s[i];
                i++;
            }
            else{
                v.push_back(str);
                str=empty;
            }
            
        }
        
        v.push_back(str);
        
        for(auto i: v){
            cout<<i<<endl;
        }
        
        int maxLen=v[0].length();
        for(auto i:v){
            int len =i.length();
            maxLen=max(len, maxLen);
            
        }
        return maxLen;
    }
};
