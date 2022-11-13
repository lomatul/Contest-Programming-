#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,n,m,j,i,b,c,s=0,k=0;

    cin>>t;

    while(t--)
    {
        long long int a[3];

        cin>>a[0]>>a[1]>>a[2]>>n;

        sort(a,a+3);

        n=n-(a[2]-a[1]);
        n=n-(a[2]-a[0]);

        if( n>=0 && n%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
