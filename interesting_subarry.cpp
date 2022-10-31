//CODECHEF PROBLEM SUBARRAY
//PROBLEM LINK: https://www.codechef.com/submit/SUBARRY?tab=submissions
#include <bits/stdc++.h>
using namespace std;
int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    long long arr[n];
	    long long arr2[n];
	    long long ind1=0;
	    long long ind2=0;
	    long long temp;
	    for(long long i=0;i<n;i++){
	        cin>>temp;
	        if (temp<0) {arr2[ind2]=temp;ind2++;}
	        else {arr[ind1]=temp; ind1++;}
	    }
	     sort(arr,arr+ind1);
	    sort(arr2,arr2+ind2);
	    long long minn,maxx;
	    if((ind2==0)&&(ind1!=0)){
	    minn=(arr[0]*arr[0]);maxx=(arr[ind1-1]*arr[ind1-1]);}
	    else if ((ind1==0)&&(ind2!=0)){
	        minn=(arr2[ind2-1]*arr2[ind2-1]);
	        maxx=arr2[0]*arr2[0];
	    }
	    else {minn= (arr[ind1-1]*arr2[0]);
	    maxx=max((arr2[0]*arr2[0]),(arr[ind1-1]*arr[ind1-1]));}
cout<<minn<<" "<<maxx<<endl;
	}

	return 0;
}
