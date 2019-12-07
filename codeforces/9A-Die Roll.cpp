#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b ;
    cin>>a>>b;
    int c=max(a,b);
     c = 7-c;
    cout<<c/__gcd(6,c)<<"/"<<6/__gcd(6,c)<<endl;
    return  0 ;
}
