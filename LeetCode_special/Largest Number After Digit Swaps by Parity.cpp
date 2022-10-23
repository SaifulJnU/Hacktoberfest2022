#include<bits/stdc++.h>
using namespace std;
 int largestInteger(int long long num) {
        vector<int>v,s;
        while(num !=0){
            int z = num%10;
            num = num/10;
            v.push_back(z);
            
        }
        s = v;
        reverse(v.begin(),v.end());
        sort(s.begin(),s.end(),greater<int>());
        int i=0;
        int j =0 ; 
        int k =0;
        for(int i =0 ; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<endl;
         for(int i =0 ; i<v.size(); i++){
            cout<<s[i];
        }
        
        cout<<endl;
        while(i<=v.size()){
              cout<<i<<endl;
            if(v[i]%2==0 && s[j]%2==0){   
              cout<<"1st"<<endl;
                v[i] = s[j];
                i++;
                j++;
            }
            else if(v[i]%2!=0 && s[k]%2!=0){
                cout<<"2nd"<<endl;
                v[i] = s[k];
                i++;
                k++;
            }
            else if(v[i]%2!=0){
                  cout<<"3rd"<<endl;
                k++;
                
            }
            else if(v[i]%2==0 ){
                  cout<<"4th"<<endl;
                j++;
                
            }
            
        }
        cout<<"yes"<<endl;
        cout<<v.size()<<endl;
        for(int i =0 ; i<v.size(); i++){
        cout<<v[i];
        }
    return 0;
    }
int main(){
    int long long   n ;
    cin>>n;
    int z;
    z = largestInteger(n);
}