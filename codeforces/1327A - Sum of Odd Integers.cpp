#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
    long long n,m;
    cin>>n>>m;
    if((m*m)<=n and (n%2==m%2))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}
