#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,k;
    cin>>n>>k;
    int ans = INT_MIN ;
    int x,y ;
    while(n--)
    {
        cin>>x>>y;
 
        if(y>k)
        {
            ans = max(ans,x-y+k);
        }
        else
            ans = max(ans,x);
    }
    cout<<ans<<endl;
    return 0 ;
}
