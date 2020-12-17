#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc ;
    cin>>tc;
    while(tc--)
    {
        long long n ;
        cin>>n;
        vector<long long>v;
        for(long long i=0;i<n;i++)
        {
            long long x ;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        long long ans = INT_MAX;
        for(long long i=0;i<v.size()-1;i++)
        {
            ans = min(ans,v[i+1]-v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
