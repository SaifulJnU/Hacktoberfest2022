#include<iostream>
#include<climits>
using namespace std;

void merge(int a[],int low,int mid,int high)//function for merging the two subarrays
{
    int x,y,i,j,k;
    x=mid-low+1;
    y=high-mid;
    int l[x+2],r[y+2];
    for(i=1;i<=x;i++)
    {
        l[i]=a[low+i-1];
    }

    for(i=1;i<=y;i++)
    {
        r[i]=a[mid+i];
    }
    l[x+1]=r[y+1]=INT_MAX;
    i=j=1;
    for(k=low;k<=high;k++)//merging the two subarrays in a sorted order
    {
        if(l[i]<=r[j])
        a[k]=l[i++];
        else
        a[k]=r[j++];
    }
}

void mergesort(int a[],int low,int high)//function for implementing mergesort
{
    if(high>low)//the recursion stops when we consider only one element
    {
        int q=(low+high)/2;
        mergesort(a,low,q);
        mergesort(a,q+1,high);
        merge(a,low,q,high);
    }
}

int main()
{
    int n;
    cout<<"enter the number of elements that you want to sort: ";
    cin>>n;
    int a[n+1],i;
    for(i=1;i<=n;i++)
    {
        cout<<"enter the number: ";
        cin>>a[i];
    }
    mergesort(a,1,n);
    cout<<"the numbers in sorted order are: ";
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}