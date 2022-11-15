#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t,j,i,a,b,sum=0;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        sum=1;

        if(a==1 || a==2)
        {
            cout<<"1"<<endl;
        }
        else
        {


            for(i=2; i<a; i++)
            {
                i=i+b;
                sum=sum+1;

                if(i>=a)
                {
                    cout<<sum<<endl;
                    break;
                }
                else
                {
                    i=i-1;
                }

            }


        }
    }


    return 0;
}
