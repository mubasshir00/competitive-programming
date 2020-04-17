#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    cin>>n;
    vector<long long>v;
    for(long long i =0;i<n;i++)
    {
        long long x ;
        cin>>x;
        v.push_back(x);

    }
    long long sum =0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        sum = sum + (v[v.size()-1]-v[i]);
    }
    cout<<sum<<endl;
    return 0 ;
}
