#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    long long int i,j;
    int  a;
    string b;
    string c;

    cin>>t;

    int sum=0;

    while(t--)
    {

        cin>>a;
        cin>>b;

        c="Timur";
        sort(c.begin(),c.end());
        sort(b.begin(),b.end());

        if(b==c)
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
