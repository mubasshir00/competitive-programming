#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
    vector<int>::iterator it ;
    vector<int>::iterator low;
    int n,m;
    int tt=1;
    while(cin>>n>>m)
    {

if(n==0)break;
        for(int i=0;i<n;i++)
        {
            int x ;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int a ;
        cout<<"CASE# "<<tt++<<":"<<endl;
        while(m--)
        {
            cin>>a;
            //cout<<"CASE# "<<tt++<<":"<<endl;
            it = find(v.begin(),v.end(),a);
            if(it!=v.end())
            {
                low = lower_bound(v.begin(),v.end(),a);
               // cout<<"CASE# "<<tt++<<":"<<endl;
                cout<<a<<" found at "<<(low-v.begin())+1<<endl;
            }
            else
            {
                //cout<<"CASE# "<<tt++<<":"<<endl;
                cout<<a<<" not found"<<endl;
            }
        }
v.clear();
    }

    return 0 ;
}
