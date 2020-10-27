#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    vector<pair<int,int>>v;
    vector<int>vect;
    cin>>tc;
    while(tc--)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    vect.push_back(v[0].second);
    for(int i=0;i<v.size()-1;i++)
    {
        v[i+1].second=v[i+1].second+(abs(v[i+1].first-v[i].second));
        vect.push_back(v[i+1].second);
    }
   sort(vect.begin(),vect.end());
   cout<<vect[vect.size()-1]<<endl;
    return 0;
}
