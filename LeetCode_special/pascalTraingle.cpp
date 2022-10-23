class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector<vector<int>> ans(numRows);
        // for(int i=0 ;i<numRow; i++){
        //     // int n=i+1;
        //     // vector<int> v(n);
        //     v[0]=1;
        //     v[n-1]=1;
        //     for(int j=0 ;j<i+1;j++){
        //         v[j]=
        //     }
        // }
        
        for(int i=0 ;i< numRows;i++){
            ans[i].resize(i+1);// basically har ek row me kitne coloums honge== noOfcols= i+1
            ans[i][0]= ans[i][i]=1; // har ek row k first col ko and har ek row ke last col ko 1
            
            for(int j=1 ;j <i; j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
        
        return ans;
        
        
    }
};
