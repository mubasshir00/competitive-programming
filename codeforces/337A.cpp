#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m,a,b=100000,c;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i=0;i+n-1<m;i++)
    {
        b=min(b,v[i+n-1]-v[i]);
    }
    cout<<b;
    return 0 ;
}
