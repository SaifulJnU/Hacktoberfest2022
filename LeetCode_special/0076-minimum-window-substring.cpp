class Solution {
public:
    string minWindow(string s, string t) {
        map<char,int>m, mf;
        
        for(int i=0;i<t.length();i++){
            mf[t[i]]++;
        }
        int n=s.length();
        int i=0;
        int j=0;
        int min= INT_MAX;
        string ans="";
        
// AAAABC M   ABC Mf
        
        while(i<n){
            bool flag=true;
            if(j<n){
                m[s[j]]++;
            }
            
            for(auto i:mf){
                
                char ch=i.first;
                if(mf[ch]>m[ch]){
                    flag=false;
                    break;
                }
            }
            
            
            // minimize
            while(flag==true && i<n){
                    if(j-i+1<min){
                        min=j-i+1;
                        ans=s.substr(i,j-i+1);
                    }


                    m[s[i]]--;
                    i++;

                    for(auto i:mf){

                        char ch=i.first;
                        if(mf[ch]>m[ch]){
                            flag=false;
                            break;
                         }
                  }
                
                
            }
            
            
            if(j<n){
                j++;
            }else{
                m[s[i]]--;
                i++;
            }
            
            
            
        }
        
        return ans;
    }
};