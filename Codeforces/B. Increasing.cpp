#include <iostream>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,i,n,m,j,sum=0;



    cin>>t;

    while(t--)
    {

    cin>>n;
    sum=0;

    long long a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);




    for(i=0,j=1; i<n,j<n; i++,j++)
    {
        if(a[i]==a[j])
        {
            sum=1;
            break;
        }
        else
        {
            sum=0;
        }

    }

    if(sum==0)
    {
           cout<<"YES"<<endl;
    }

    else if(sum==1)

    {
        cout<<"NO"<<endl;
    }


    }

    return 0;
}
