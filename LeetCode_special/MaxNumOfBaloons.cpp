class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char, int> m1, m2;
        for(int i=0 ;i<text.length();i++){
            m1[text[i]]++;
        }
        
        string str="balloon";
        for(int j=0 ;j<str.length();j++){
            m2[str[j]]++;
        }
        
        int mini=INT_MAX;
        for(auto i:m2){
            char ch=i.first;
            if(m1.find(ch)==m1.end()){
                mini=0;
                break;
            }else{
                mini=min(mini, m1[ch]/i.second);
            }
        }
        return mini;
            
        
        
    }
    
    
//     int maxNumberOfBalloons(string text) {
//         int b, a,l,o,n;
//         b=l=a=n=o=0;
//         for(int i=0 ;i<text.length();i++){
//             char ch=text[i];
//             if(ch=='b'){
//                 b++;
//             }else if(ch=='a'){
//                 a++;
//             }else if(ch=='l'){
//                 l++;
//             }else 
//             if(ch=='o'){
//                 o++;
//             }else if(ch=='n'){
//                 n++;
//             }
            
//         }
        
//         return min({b,a,l/2,o/2,n});
        
//     }
    
    
};
