/*
This is an example of brute-force with implementation
Questin Link :  https://codeforces.com/contest/1512/problem/F
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t,n,a=0,b=0,ans=0,m,c,d=0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        ll res[n],arr[n];
        a=0;
        d=0;
        ans=LLONG_MAX;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<n-1;i++){
            cin>>res[i];
        }
        for(ll i=0;i<n;i++){
            c=(m-a)/arr[i];
            if((m-a)%arr[i]) c++;
            ans=min(ans,max(b,d+c));
            if(i<n-1){
                if(a>=res[i]){
                    a-=res[i];
                    d++;
                }
                else{
                    d+=(res[i]-a)/arr[i]+1;
                    a+=((res[i]-a)/arr[i])*arr[i]-res[i];
                    if(a<0){
                        a+=arr[i];
                        d++;
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
}