#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t,n,m;
    string a,b;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

       m= a.length();//4
       n= b.length();//2




       if(a[m-1]== b[n-1] && b[n-1] =='S')
       {
           if(m>n)
           {
               cout<<"<"<<endl;
           }
           else if(m<n)
           {
                cout<<"<"<<endl;
           }

            else
           {
               cout<<"="<<endl;
           }
       }

       else   if(a[m-1]==b[n-1] && b[n-1] =='L')
       {
           if(m>n)
           {
               cout<<">"<<endl;
           }
           else if(n>m)
           {
                cout<<"<"<<endl;
           }
           else
           {
               cout<<"="<<endl;
           }
       }


        else   if(a[m-1]==b[n-1] && b[n-1] =='M')
       {
           if(m>n)
           {
               cout<<">"<<endl;
           }
           else if(n>m)
           {
                cout<<"<"<<endl;
           }
            else
           {
               cout<<"="<<endl;
           }
       }


       else
       {

           if(a[m-1]=='S' && b[n-1]=='M')
           {
               cout<<"<"<<endl;
           }

           else if(a[m-1]=='M' && b[n-1]=='L')
           {
               cout<<"<"<<endl;
           }

            else if(a[m-1]=='S' && b[n-1]=='L')
           {
               cout<<"<"<<endl;
           }

           else

           {
               cout<<">"<<endl;
           }

       }



    }
   // cout << "Hello world!" << endl;
    return 0;
}
