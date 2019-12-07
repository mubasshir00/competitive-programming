#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<pair <int,int> >v;
    vector<int>ve;
    int n,f=0,count =0 ;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
        ve.push_back(y);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first == v[i].second)
        {
            count++;
        }
    }
    if(count ==n)cout<<"Poor Alex"<<endl;
    else{
   for(int i=0;i<v.size();i++)
    {
      if(v[i].second >v[i+1].second)
      {
          f=1;
      }
    }
if(f==1)cout<<"Happy Alex"<<endl;
else
    cout<<"Poor Alex"<<endl;
    }
    return 0 ;
}
