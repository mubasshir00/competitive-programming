#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++){
        long long x ;
        cin>>x;
        v.push_back(x);
    }
    for(long long i=0;i<v.size();i++){
        if((v[i]&1)==0){
            cout<<v[i]-1<<" ";
        }
        else cout<<v[i]<<" ";
    }

    return 0;
}
