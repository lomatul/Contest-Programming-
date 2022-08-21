#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>


using namespace std;

int main(){

   int n,m,t,sum=0;
   cin>>t;
   while(t--)
   {
    cin>>n>>m;

    if(n>m)
    {
        swap(n,m);
        sum=n+m+(n-2);

    }
    else if(m==1 && n==1)
    {
        sum=0;
    }

    else
    {
          sum=n+m+(n-2);
    }

    cout<<sum<<endl;

   }



return 0;

    }
