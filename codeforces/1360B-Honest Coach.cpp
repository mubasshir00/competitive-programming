#include<bits/stdc++.h>
using namespace std ;
int main()
{
 int tc;
 cin>>tc;
 while(tc--){
  int n ;
  cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
   int x ;
   cin>>x;
   v.push_back(x);
  }
  sort(v.begin(),v.end());
  int ans =INT_MAX;
  for(int i=0;i<v.size()-1;i++){
   ans = min(ans,v[i+1]-v[i]);
  }
 
  cout<<ans<<endl;
 }
 
 return 0;
}
