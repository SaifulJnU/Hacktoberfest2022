class Solution {
public:
    
    void func( int indx,string s,vector<vector<string>> &res,vector<string> &path ){
        // base case
        if(indx==s.length()){
            res.push_back(path);
            return;
        }
        
        for(int i=indx; i<s.length();i++){
            if(isPalli(indx,i,s)){
                // if it is a pallindrome
                // then call for next recursive call
                // toh sabse pehle ushe push toh karva lo
                path.push_back(s.substr(indx, i-indx+1));
                func(i+1,s,res, path);
                // backtracking
                path.pop_back();
            }
        }
    }
    
    bool isPalli(int start, int end, string s){
        while(start<=end){
            if(s[start++]!=s[end--]){
                return false;
            }
            
            }
        return true;
    }
    vector<vector<string>> partition(string s) {
        int n=s.length();
        vector<vector<string>> res;
        vector<string> path;
        func(0,s,res,path);
        return res;
    }
};
