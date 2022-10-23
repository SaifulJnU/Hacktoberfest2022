class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        
        string ans="";
        for(int i=0 ;i<strs[0].size();i++){// pehli string me traverse kar rhe hai 
            char ch= strs[0][i];// pehli string kaa charcter le liya hai
            // cout<<"1 "<< ch<<endl;
            bool match=true;
            for(int j=1; j<n;j++){// ynha par saari string ko acces kar rhe hai 
                // cout<<"2"<<endl;
                // cout<<"i "<<i<<" j "<<j<<endl;
                // cout<<strs[j][i]<<endl;
                if(strs[j].size()<i || ch!=strs[j][i]){// agar match nhi karte ha
                    // cout<<"yes"<<endl;
                    match=false;
                    break;
                }
                
            }
            
            // cout<<"h"<<endl;
             if(match==false){
                    break;
            }else{
                    ans.push_back(ch);
                    
            }
            
           
        }
        
        return ans;
    }
};
