class Solution {
    
public:
    bool bs(vector<int>mat, int s, int e, int num){
        int mid= e+(s-e)/2;
        if(s>e){
            return false;
        }
        
        
        // cout<<s;
        // cout<<e;
        // cout<<mid;
        cout<<mat[mid];
        
        if(num==mat[mid]){
            return true;
        }
        if(mat[mid]<num){
            return bs(mat, mid+1, e, num);
        }else{
            return bs(mat, s, mid-1, num);
        }
        
        
    }
    
    void print(vector<int> mat){
        for(int i=0 ;i<mat.size();i++){
            cout<<mat[i]<<endl;
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        for(auto it:matrix){
            // it is vector
            // print(it);
            bool flag= bs(it,0, it.size()-1,target);
            
            if(flag){
                return flag;
                break;
            }
        }
        
        return false;
        
        
    }
};
