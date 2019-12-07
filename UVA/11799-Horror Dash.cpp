#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
    int n ;
    int k=1;
    cin>>n;
    while(n--)
    {
        int m ;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x ;
            cin>>x;
            v.push_back(x);
        }

        sort(v.begin(),v.end());

        int s =v.size();
        cout<<"Case "<<k++<<": "<<v[s-1]<<endl;
        v.clear();
    }
    return 0 ;
}
