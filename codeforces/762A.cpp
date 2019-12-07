#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long  n ,k ;
    scanf("%lld %lld",&n,&k);
    vector<long long int>v;
    for(long long i=1;i<=sqrt(n);i++)
    {
        if(n%i==0){
        v.push_back(i);
        if(i*i!=n)
        v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size()<k)cout<<"-1"<<endl;
    else{
    cout<<v[k-1];
    }
    v.clear();
    return 0 ;
}
