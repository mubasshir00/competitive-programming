#include<bits/stdc++.h>
using namespace std ;
long long arr;
int n ;
long long  CountArray[100005];
long long ans[100005];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>arr;
        CountArray[arr]++;
       // cout<<CountArray[arr]<<endl;
    }
    ans[0]=0;
    ans[1]=CountArray[1];
    for(long long i=2;i<100005;i++)
    {
        ans[i]=max(ans[i-1],ans[i-2]+(CountArray[i]*i));
       // cout<<ans[i]<<endl;
    }
    cout<<ans[100003]<<endl;
    return 0 ;
}
