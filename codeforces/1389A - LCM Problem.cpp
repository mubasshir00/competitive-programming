#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    cin>>n;
    while(n--)
    {
        long long l,r;
        cin>>l>>r;
        if((r/l)<2)
        {
            cout<<"-1"<<" "<<"-1"<<endl;
        }
        else cout<<l<<" "<<2*l<<endl;
    }
    return 0;
}
