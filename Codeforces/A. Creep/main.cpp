#include <iostream>

using namespace std;

int main()
{
    int n,i,k,a,b,m;
    cin>>n;
    for(i=0; i<n; i++)
    {

        cin>>a>>b;

        if(b>=a)//
        {
            for(k=0;k<m;k++)
            {
                if(k%2==1&& a)
                {
                    cout<<"0";
                    a--;
                }
                else{
                    cout<<"1";
                }
            }
            cout<<endl;
        }
        else{
             for(k=0;k<m;k++)//7
            {
                if(k%2==1&& b)//
                {

                cout<<"1";
                    b--;
                }
                else{
                    cout<<"0";
                }
            }
            cout << endl;
        }
    }


    return 0;
}
