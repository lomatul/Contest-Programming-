#include <iostream>

using namespace std;

int main()
{
    int n,i,a,b,h1,h2,h3;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>a;
        h3=(a-3)/3;
        b=a-h3;
      if(b%2==0)
        {
            h1= (b+2)/2;
            h2= a-(h1+h3);
        }
        else
        {
             h1= (b+1)/2;
            h2=  (b-1)/2;

        }


 cout <<h1<<h2<<h3<< endl;

    }


    return 0;
}
