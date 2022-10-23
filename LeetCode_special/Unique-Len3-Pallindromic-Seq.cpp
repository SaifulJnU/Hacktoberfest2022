class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n=s.length();
        int ans=0;
        
        vector<int>f(26,0);
        for(int i=0 ; i<n; i++){// here we are calculating the frequency of each ower case letter 
            f[s[i]-'a']++;
        }
        
        // GYAAN
        // Only possiblity of subsequence is XYX, where Y can be X
        // In this question, we will track the first and last ocurence of each charcter whose frequency is greater than 1 
        // then for each character ,we will count the unique characters between its first and last occurrence .
        // That is the number of pallindroemes with that charcter in the first and last positions.
        
        
        for(int i=0 ;   i   <  26;i++){
            
            if(f[i]<=1)
                continue;// bcoz we are sure ,it wil have zero pallindromes 
            
            
            
            
            int first=-1, last=-1;// counter for determinng the first and last occurence of charcter 
            
            for(int j=0 ;j<n ;j++){
                if((s[j]-'a')==i)
                    {first=j;// first occurence of character i
                    break;}
            }
            
            for(int j=n-1; j>=0; j--){// last occurence of character i 
                if((s[j]-'a')==i)
                    {last=j;
                    break;}
            }
            
            unordered_set<int>st;// to count the number of unique character between first and last occurence of character 
            
            for(int k= first+1; k<last;k++){
                st.insert((s[k]-'a'));
            }
            
            ans+=st.size();
            
        }
        
        return ans;
        
        
    }
};
