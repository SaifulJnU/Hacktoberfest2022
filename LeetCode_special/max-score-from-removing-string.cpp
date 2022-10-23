class Solution {
public:
    int totalSum=0;
    string remove(string rem, string s, int val){
        stack<char>st;
        cout<<"/"<<endl;
        for(int i=0; i<s.length();i++){
            char ch= s[i];
            
            string temp="";
            if(!st.empty()){
                temp+= st.top();
                
                if((temp+ch)==rem){
                    totalSum+=val;
                    
                    st.pop();
                }else{
                    st.push(ch);
                }
                
            }else{
                
                st.push(ch);
            }
        }
        
        
        s="";
        while(!st.empty()){
            char ch= st.top();
            s+= ch;
            st.pop();
        }
        
        reverse(s.begin(), s.end());
        return s;
    }
    int maximumGain(string s, int x, int y) {
        bool flag= x>y;
        
        s= remove(flag? "ab":"ba",s, flag? x:y);
        remove(flag?"ba":"ab",s,flag? y:x);// zarurat nhi h hume ish ouput ki
        cout<<"f"<<endl;
        return totalSum;
    }
};



//         stack<char>st;
//         for(int i=0;i<s.length();i++){
//             st.push(s[i]);
//         }
//         int ans=0;
//         while(!st.empty()){
//             char ch= st.top();
//             st.pop();
            
//             if(ch=='b'){
//                 if(!st.empty()){
//                     char ch1= st.top();
//                     if(ch1=='a'){
//                         st.pop();
//                         ans+=x;
//                     }
//             }
                
                
                
//             }else{
//                 // ch=a
//                 if(!st.empty())
//                     {char ch1= st.top();
//                     if(ch1=='b'){
//                         st.pop();
//                         ans+=y;
//                     }}
                
                
//             }
//         }
        
//         return ans;
