#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
    vector<int>v1;
    vector<int>v2;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x ;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
   // reverse(v.begin()+(n/2),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(i%2==1)
        {
            v1.push_back(v[i]);
        }
        else
        {
            v2.push_back(v[i]);
        }
    }
  reverse(v2.begin(),v2.end());
  for(int i=0;i<v1.size();i++)
  {
      cout<<v1[i]<<" ";
  }
  for(int i=0;i<v2.size();i++)
  {
      cout<<v2[i]<<" ";
  }
  cout<<endl;
    return 0 ;
}
