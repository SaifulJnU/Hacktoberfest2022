class Solution {
public:
    string intToRoman(int num) {
        string s="";
        
        vector<int>integer{1,4,5,9,10,40,50,90,100,400,500,900,1000};
        
        vector<string>roman{"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
  
         int last=integer.size()-1;
        
        while(last>=0)
        {
            int index=num/integer[last];
            num=num%integer[last];
            
            while(index>0)
            {
                index--;
                s+=roman[last];
            }
            last--;
        }
        
        return s;
    }
};