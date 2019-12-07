#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    cin>>tc;
    while(tc--)
    {
    vector<int>v;
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int s = v.size()-1;
    int a = v[s]-v[0];
    cout<<a*2<<endl;
    v.clear();
}

    return 0 ;
}
