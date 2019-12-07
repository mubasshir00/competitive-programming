#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b,c,d,e,f,g,h;
    cin>>a>>b>>c;
    d=a+b+c;
    e=a+c+c+a;
    f=b+b+a+a;
    g=b+c+c+b;
    int m = min(g,min(f,min(d,e)));
    cout<<m;
    return 0 ;
}
