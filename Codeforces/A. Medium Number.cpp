#include <iostream>
#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    long long int t,m[3],n;
 
    cin>>t;
 
    while(t--)
    {
        cin>>m[0]>>m[1]>>m[2];
 
        sort(m,m+3);
 
        cout<<m[1]<<endl;
 
    }
 
    return 0;
}
