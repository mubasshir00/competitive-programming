#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
    long long n;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    if(v[n-1]>=(v[0]+v[1]))
    {
        cout<<1<<" "<<2<<" "<<n<<endl;
    }
    else cout<<"-1"<<endl;
    }
    return 0;
}
