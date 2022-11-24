#include <iostream>
#include <bits/stdc++.h>
#include<queue>

using namespace std;


int main()
{
    long long int t,n,a,i,b,sum=0;

    cin>>n;

    if(n==2)
    {
        cout<<"1"<<endl;
        return 0;
    }
    else
    {
        for(i=1; i<n; i++)
        {
            a=n-i;

            if(a%i==0)
            {
                sum=sum+1;
            }

        }
    }

    cout<<sum<<endl;

    return 0;
}
