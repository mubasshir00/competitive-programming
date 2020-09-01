#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    long long a,b,k;
    while(tc--)
    {
        cin>>a>>b>>k;
        if((k&1)==1)
        {
            cout<<(((k-1)>>1)*a)-(((k-1)>>1)*b)+a<<endl;
        }
        else
        {
            cout<<((k>>1)*a)-((k>>1)*b)<<endl;
        }
    }
    return 0;
}
