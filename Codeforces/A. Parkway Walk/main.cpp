#include <iostream>

using namespace std;

int main()
{

    int i,j,a,b,c,m,n,p,sum=0;

    cin>>a;

    for (i=0; i<a; i++)
    {
        cin>>b>>c;
        for (j=0;j<b;j++)
        {
            cin>>m;
            sum=sum+m;
        }

        if (sum>c)
        {
            cout<<sum-c<<"\n";
            sum=0;
        }
        else
        {
            cout<<0<<"\n";
            sum=0;
        }


    }


    return 0;
}
