#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,a=0;
    cin>>n;
    while(n)
    {
        a=a+n%2;
        n=n/2;

    }
    cout<<a;
    return 0 ;
}
