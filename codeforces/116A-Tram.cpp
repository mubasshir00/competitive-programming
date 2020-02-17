#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
        int res=0;
    res=b[0];
    int ans =res;
    for(int i=1;i<n;i++)
    {
        res = abs(a[i]-abs(b[i]+res));
        //cout<<res<<endl;
        ans = max(ans,res);
    }
    if(ans==0)
    {
        sort(b,b+n);
        cout<<b[n-1]<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
    return 0 ;
}
