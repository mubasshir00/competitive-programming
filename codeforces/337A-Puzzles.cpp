#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    int ans = 1000;
    cin>>n>>m;
    int arr[10000];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    for(int i=0;i<(m-n+1);i++)
    {
        ans = min(ans, abs(arr[i+n-1]-arr[i]) );
    }
    cout<<ans<<endl;

    return 0 ;
}
