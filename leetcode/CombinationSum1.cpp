//combination sum I (leetcode)

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void findcombination( int idx, int arr[], int n, vector<vector<int>>&ans, vector<int>&ds, int target)
{
        //base case
        if(idx==n){
                if(target==0)
                {
                        ans.push_back(ds);
                }       
                return;
        }
        // pick : pick can perform multiple times thats why idx remain same
        if(arr[idx]<=target){
        ds.push_back(arr[idx]);
        findcombination(idx, arr, n, ans, ds, target-arr[idx]);
        ds.pop_back();
        }
        //not pick
        findcombination(idx+1, arr, n, ans, ds, target);
}

int main(){
        int arr[] = {2,3,6,7};
        vector<int> ds;
        int idx = 0;
        int n = 4;
        int target = 7;

        //recursive call
        findcombination(idx, arr, n, ans, ds, target);

        //printing ans 2d vector
        for(int i = 0; i< ans.size(); i++)
        {       cout<<"[";
                for(int j = 0; j<ans[i].size(); j++){
                        cout<<ans[i][j] <<" ";
                }
                cout<<"]";
        }

}