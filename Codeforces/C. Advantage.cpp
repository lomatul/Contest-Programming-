#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int t,i,j,n,d;
    string s;
    cin>>t;
 
    while(t--)
    {
        cin>>n;
        long long int a[n],b[n];
 
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
 
        sort(b,b+n);
 
        d= b[n-1];
        j = b[n-2];
 
        for(i=0; i<n; i++)
        {
            if(a[i]==d)
            {
                cout<<d-j<<" ";
            }
            else
            {
                cout<<a[i]-d<<" ";
            }
        }
         cout<<"\n";

    }
    return 0;
}
