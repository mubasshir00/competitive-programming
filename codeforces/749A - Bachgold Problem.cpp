#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    cin>>n;
    if((n&1)==1)
    {
        cout<<(n>>1)<<endl;
        for(int i=0;i<(n>>1)-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    else{
            cout<<(n>>1)<<endl;
        for(int i=0;i<(n>>1);i++)
        {
            cout<<2<<" ";
        }
    }
    return 0;
}
