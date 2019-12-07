#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,k,count=0;
    vector<int>v;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0;i<v.size();i++)
    {
        if(5-v[i]>=k)count++;
    }
    cout<<count/3<<endl;

    return 0 ;
}
