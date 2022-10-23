class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        // vector<bool> vis;
        // for(int i=0 ;i<r;i++){
        //     for(int j=0 ;j<c; j++){
        //         if(matrix[i][j]==0){
        //             vis
        //         }
        //     }
        // }
        
        
        vector<pair<int, int>> v;
        vector<vector<int>> ans;
        for(int i=0 ;i <r ;i++){
            for(int j=0 ;j <c; j++){
                if(matrix[i][j]==0){
                    pair<int, int> p;
                    p.first=i;
                    p.second=j;
                    v.push_back(p);// (i,j)
                }
            }
        }
        
        for(int i=0; i<v.size();i++){
            pair<int, int> pAns;
            pAns=v[i];
            int m=pAns.first;
            int n=pAns.second;
            for(int j=0;j <c;j++){
                matrix[m][j]=0;
            }
            
            for(int k=0; k<r; k++){
                matrix[k][n]=0;
            }
            
        }
    }
};
