#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    long long int m ;
    m = min(k2,min(k5,k6));
   // cout<<(m*256)<<endl;
    long long int a ;
    a=(k2-m);
    if(a>0)
    {
        long long int b = min(a,k3);
        cout<<(m*256)+(b*32)<<endl;
    }
    else
    {
        cout<<(m*256)<<endl;
    }
    return 0 ;
}
