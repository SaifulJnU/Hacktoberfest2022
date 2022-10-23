class Solution {
public:
//     void solve(vector<int> nums,vector<vector<int>>& ans, int index){
//         if(index>= nums.size()){ //123 0
//             ans.push_back(nums);
//             return;
//         }
        
//         for(int j=index; j<nums.size();j++){
//             swap(nums[index], nums[j]);//123
//             solve(nums, ans, index+1);//index=3  0 1 2 
            
//             // backTracking
//             swap(nums[index], nums[j]);
//         }
//     }
    
    // void print(vector<int> v){
    //     for(int i=0 ;i< v.size();i++){
    //         cout<<v[i];
    //     }
    //     cout<<" "<< endl;
    // }
    void nextPermutation(vector<int>& nums) {
        
//         long long n= nums.size();
        
//         vector<vector<int>> ans;
//         solve(nums,ans, 0);
//         sort(ans.begin(), ans.end());
        
//         ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        
       
//         for(int i=0 ;i<ans.size();i++){
//             vector<int> a= ans[i];
//             // print(a);
//             if(nums==a){
//                 // print(nums);
//                 cout<<"a";
//                 // print(a);
                
//                 // print(ans[i+1]);
//                 if(i+1==ans.size()){
//                     cout<<"yes";
//                     nums=ans[0];
//                     return;
                    
//                 }else{
//                    cout<<"no";
//                     nums=ans[i+1];
//                     return;
                
                    
//                 }
                
//                 cout<<"----"<<endl;
                
                    
//             }
            
//         }
        
        
        // first of all find the breakpoint 
        
        int n =nums.size();
        int breakPoint=-1;
        for(int i=n-1; i>0; i--){
            
            if(nums[i]>nums[i-1]){
                breakPoint=i-1;
                break;
            }
        }
        
        // if you dont't find the break point 
        
        if(breakPoint<0){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // if there is a break point 
        
        for(int i= n-1; i>=0; i--){
            if(nums[i]>nums[breakPoint]){
                swap(nums[breakPoint] ,nums[i]);
                reverse(nums.begin()+breakPoint+1, nums.end());
                break;
            }
        }
        
        
        
        
        
        
        
        
      
        
        
    }
};
