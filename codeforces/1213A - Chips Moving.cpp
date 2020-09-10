#include<bits/stdc++.h>
using namespace std ;
 
int main()
{
    int n;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    long long count =0;
    for(long long i=0;i<v.size();i++)
    {
        if((v[i]&1)==1)count++;
    }
    cout<<min(count,n-count)<<endl;
    return 0;
}
