#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t,i,j,sum=0,ans;
     char a,b,c,d;
     string brr;

     cin>>t;

     while(t--)
     {
         cin>>a>>b;
        brr.push_back(a);
       brr.push_back(b);
         cin>>c>>d;
         brr.push_back(c);
        brr.push_back(d);


       sort(brr.begin(),brr.end());

       //cout<<brr<<endl;


         for(i=0; i<3; i++)
         {
             if(brr[i]!=brr[i+1])
             {
                 sum=sum+1;
             }
         }

         cout<<sum<<endl;
         sum=0;

         brr.clear();




     }


    return 0;
}
