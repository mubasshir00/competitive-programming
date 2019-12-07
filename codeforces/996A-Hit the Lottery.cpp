#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int n,a1,b,c1,d,d1,e,e1,f,f1,g;
    cin>>n;
    int ans = 0;
    a1=n/100;
    b=n%100;
    c1=b/20;
    d=b%20;
    e=d/10;
    e1=d%10;
    f=e1/5;
    f1=e1%5;
    g=f1/1;
    cout<<a1+c1+e+f+g<<endl;


    return 0 ;
}
