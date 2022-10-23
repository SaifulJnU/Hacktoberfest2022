#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{   
    pair<int, int>p;
    
	sort(arr.begin(), arr.end());
    
    int ans;
    for(int i=0;i < arr.size();i++){
        if(arr[i]==arr[i+1]){
//             cout<<arr[i]<<endl;
            p.second=arr[i];
            ans=i+1;
        }
    }
    
//     cout<<"yes "<<p.second<<endl;
//     cout<<"ans"<<ans<<endl;;
        vector<int>:: iterator it;
        for(int i=1; i<=arr.size();i++){
            it=find(arr.begin(), arr.end(),i);
            if(it==arr.end()){
                p.first=i;
            }
        }
    
//      cout<<p.first<<endl;
    
    return p;
	
}
