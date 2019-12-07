#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,i;
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ans=ans+(n-i)*i;
    }
    cout<<ans+n;
    return 0 ;
}
