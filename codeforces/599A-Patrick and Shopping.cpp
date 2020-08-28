#include<bits/stdc++.h>
using namespace std ;


int main()
{
    long long d1,d2,d3;
    cin>>d1>>d2>>d3;
    cout<<min((d1+d2+d3),min(((d1+d2)*2),min(  ((d1+d3)*2),((d2+d3)*2))));
    //((d1+d3)*2),((d2+d3)*2)
    return 0 ;
}
