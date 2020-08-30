#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    int count =1;
    int ans = INT_MIN;
    for(long long i=0;i<v.size()-1;i++)
    {
        if(v[i+1]>v[i])
        {
            count++;
        }
        else{
        ans = max(ans,count);
        count=1;
        }

    }
   // cout<<count<<endl;
    cout<<max(count,ans)<<endl;
    return 0;
}
