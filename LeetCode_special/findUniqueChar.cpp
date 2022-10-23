class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char, int> map;
        
        for(int i=s.length()-1; i>=0;i--){
            map[s[i]]++;
        }
        
        
        // for(auto i: map){
        //     cout<<i.first<<" ";
        //     cout<<i.second<<endl;
        // }
        
        
        char ans='1';
        cout<<"1"<<ans<<endl;
        for(auto i: map){
            if(i.second==1){
                ans=i.first; 
                
                break;
            }
            
            cout<<"h"<<ans<<endl;;
        }
        
        
        
        for(int i=0 ;i <s.length();i++){
            if(s[i]==ans){
                return i;
                break;
            }
        }
        
        
        return -1;
    }
};
