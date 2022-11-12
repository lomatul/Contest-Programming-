#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,n,i,sum=0,ans,m;

    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            m=n/2;

            cout<<m<<endl;
        }
        else
        {

            m=(n/2)+1;
            cout<<m<<endl;
        }

    }

    return 0;
}
