#include<bits/stdc++.h>
using namespace std ;
int main(){
  long long n,m;
  cin>>n>>m;
  vector<long long> v;
  for (long long i = 0; i < n; i++)
  {
    long long x;
    cin>>x;
    v.push_back(x);
  }
  vector<long long>v1;
  vector<long long>v2;
  v1.push_back(0);
  v2.push_back(0);
  for (long long i = 0; i < v.size()-1; i++)
  {
    if(v[i]>v[i+1]){
      v1.push_back(v1[i ] + (v[i] - v[i + 1]));
    } else {
      v1.push_back(max((long long)0,v1[i]));
    }
  }
  // reverse(v.begin(),v.end());
  for (long long i = v.size()-1; i >=0; i--)
  {
    // cout << "v.size()-1-i" << v.size() - 1 - i<<endl;
    if (v[i] > v[i - 1])
    {
      // cout<<v[i]<<" "<<v[i-1]<<endl;
      v2.push_back(v2[v.size()-1-i] + (v[i] - v[i-1]));
    }
    else
    {
      v2.push_back(v2[v.size() - 1 - i]);
    }
  }
  // for(int i=0;i<v2.size();i++){
  //   cout<<v2[i]<<endl;
  // }
  // reverse(v2.begin(),v2.end());
  while (m--)
  {
    long long  ans = 0;
    long long  s, t;
    cin>>s>>t;
    if (s==t){
      cout<<"0"<<endl;
    }
    else if(s<t){
      ans = v1[t-1] - v1[s-1];
    } else {
      ans = v2[v2.size()-t-1] - v2[v2.size()- s-1];
    }
    
    cout<<ans<<endl;
    ans =0 ;
    v.clear();
  }
  
  return 0;
}
