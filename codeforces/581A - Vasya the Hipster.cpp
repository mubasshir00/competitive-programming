#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b ;
    cin>>a>>b;
    int m =0 ;
    m=max((a-min(a,b))/2,(b-min(a,b))/2);
    int q = min(a,b);
    cout<<q<<" "<<m<<endl;

    return 0 ;
}
