
#include <iostream>
#include<cmath>
using namespace std;

int main()
{ int m,n ;
 cout << "from : ";
    cin>>m;
    cout << "to : ";
    cin>>n;


    for(int i=m;i<=n;i++) 
    {   int ctr=0;

        for(int j=2;j<=sqrt(i);j++)
        {   if(i%j==0)

                ctr=1;

        }

        if(ctr==0) //

                cout<<i<<" ";

    }

    return 0;

}
