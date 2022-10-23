#include<iostream>
using namespace std;
#include<queue>

int solve(int*arr, int n, int k){
    deque<int> maxi(k);
    deque<int> mini(k);

    // addition of first k size window 
    // pehli k size window me max and min element , vo store ho jayenge 
    for(int i=0 ;i<k;i++){
        while(!maxi.empty() && arr[maxi.back()]<arr[i]){
            maxi.pop_back();// we need our maximum elem
        }

        while(!mini.empty() && arr[mini.back()]>arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);
    }

    int ans=0;
    // calculating the max and min elem of other windows 
    for(int i=k ;i<n;i++){
        ans+=arr[maxi.front()]+arr[mini.front()];

        // now in order to achieve window 
        // what we do is that 
        // ek elem remove karo and ek inser karo

        // Removal 
        while(!mini.empty() && i-mini.front()>=k){
            mini.pop_back();
        }

        while(!maxi.empty() && i-maxi.front()>=k){
            maxi.pop_back();
        }

        // Addition 
         while(!maxi.empty() && arr[maxi.back()]<arr[i]){
            maxi.pop_back();// we need our maximum elem
        }

        while(!mini.empty() && arr[mini.back()]>arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        
    }

        ans+=arr[maxi.front()]+arr[mini.front()];

        return ans;




}
int main(){
    int arr[7]= {2,5,-1,7,-3,-1,-2};
    int ans=solve(arr,7,4);

    cout<<ans<<endl;























    return 0;
}
