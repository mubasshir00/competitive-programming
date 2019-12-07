#include<bits/stdc++.h>
using namespace std ;
long long int fac(long long int n)
{
    if(n==0)return 1;
    return n*fac(n-1);
}
int main()
{
    long long int a,b;
    cin>>a>>b;
    long long int c = min(a,b);
    cout<<fac(c)<<endl;

    return 0 ;
}
