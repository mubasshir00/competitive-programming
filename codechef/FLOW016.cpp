#include<bits/stdc++.h>
using namespace std ;
long long gcd(long long a,long long b)
{
    if(b==0)return a ;
    else return gcd(b,a%b);
}

long long lcm(long long c,long long d)
{
    return  c/gcd(c,d)*d;
}
int main()
{
    long long x,y;
    long long tc;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y;
        cout<<gcd(x,y)<<" "<<lcm(x,y)<<endl;
    }
    return 0 ;
}
