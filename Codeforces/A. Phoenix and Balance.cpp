#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,j,i,k,a=0,b=0,n,m,sum;

    cin>>t;
    while(t--)
    {

        cin>>n;
        if(n==2)
        {
            cout<< "2" <<endl;
        }
        else
        {

        m=n/2;
        k=2*m;
        a=0;
        b=0;

            for(i=1; i<=n; i++)
        {
            if(i>=m && i<k )
            {
                b= b+ pow(2,i);
            }
            else
            {
                a=a+pow(2,i);
            }

        }
        sum= abs(a-b);
        cout<<sum<<endl;
    }

    }
    return 0;
}
