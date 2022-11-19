#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
 
    long long int t,m,i,sum=0;
    string a;
 
    cin>>t;
 
    while(t--)
    {
 
        cin>>a;
        if(a=="YES" || a=="Yess" || a=="se")
        {
            cout<<"NO"<<endl;
        }
        else
 
        {
            m=a.length();
 
            if(m==1)
            {
                if(a=="Y" || a=="e" || a=="s")
                {
                    cout<<"Yes"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else if(m==2)
            {
                if(a=="Ye" || a=="es" || a=="sY")
                {
                    cout<<"Yes"<<endl;
 
                }
                else
                {
                    cout<<"NO"<<endl;
 
                }
            }
            else
            {
                for(i=0; i<m-1; i++)
                {
                    if(a[i]=='Y' && a[i+1]=='e')
                    {
                        sum=0;
                    }
                    else  if(a[i]=='e' && a[i+1]=='s')
                    {
                        sum=0;
                    }
                      else  if(a[i]=='s' && a[i+1]=='Y')
                    {
                        sum=0;
                    }
                    else
                    {
                        sum=1;
                        break;
                    }
 
                }
 
                if(sum==1)
                {
                     cout<<"NO"<<endl;
                     sum=0;
                }
                else if(sum==0)
                {
                     cout<<"YES"<<endl;
                     sum=0;
                }
 
            }
 
        }
    }
 
    return 0;
}
