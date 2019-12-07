#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<string>v;
    int n,m;
    cin>>n>>m;
    string s1[m],s2[m];
    string q ;
    for(int i=0;i<m;i++)
    {
        cin>>s1[i]>>s2[i];
    }

    while(n--)
    {
        cin>>q;
        for(int i=0;i<m;i++){
        if(q==s1[i] || q==s2[i])
        {
            if(s1[i].size()>s2[i].size())
            {
                //cout<<s2[i]<<endl;
                v.push_back(s2[i]);
            }
            else
            {
               // cout<<s1[i]<<endl;
               v.push_back(s1[i]);
            }
        }
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0 ;
}
