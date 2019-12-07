#include<bits/stdc++.h>
using namespace std ;
vector<int>v;
int main()
{
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int q ;
    int x ;
    cin>>q;
    while(q--)
    {
        cin>>x;
        vector<int>::iterator a ;
         a = upper_bound(v.begin(),v.end(),x);
        cout<<(a-v.begin())<<endl;
    }
    return 0 ;
}
