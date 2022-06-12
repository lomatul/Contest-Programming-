#include <iostream>

using namespace std;

int main()
{
    int a,b,n,s,k,i;
    cin>>n;
    int p[n];
    for (i=0; i<n; i++)
    {

        cin>>a>>b;
        if (a==b)
        {
            p[i]=0;
        }
        if(a>b)
        {
            s=a-b;
            p[i]=s/10;
            k=s%10;
            if (k!=0)
            {
                p[i]=p[i]+1;
            }


        }

        if(a<b)
        {
            s=b-a;
            p[i]=s/10;
            k=s%10;
            if (k!=0)
            {
                p[i]=p[i]+1;
            }


        }
    }
    for (i=0; i<n; i++)
    {
        cout<<p[i]<<endl;
    }


    return 0;
}
