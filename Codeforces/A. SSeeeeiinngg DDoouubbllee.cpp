#include <iostream>
#include <bits/stdc++.h>
#include<queue>
 
using namespace std;
 
 
int main()
{
    long long int t,a,i,b,m,sum=0;
 
 
 
    cin>>t;
 
    while(t--)
    {
        string n;
 
        cin>>n;
 
 
           m= n.length();
 
          cout<<n;
          for(i=m-1; i>=0; i--)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
 
 
 
    return 0;
}
