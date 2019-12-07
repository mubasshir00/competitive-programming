#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,sum=0,count=0,f=0 ;
    vector<int>v;
    cin>>n;
    for(int i=0;i<12;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    if(n==0)cout<<n<<endl;
    else{
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
    sum=sum+v[i];
    count++;
    if(sum>=n)
    {
        cout<<count<<endl;
        f==0;
        return 0;
    }
//else f=1;
    }
    if(f==0)
    cout<<"-1"<<endl;
    }
    return 0;
}
