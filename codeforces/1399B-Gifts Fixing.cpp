#include<bits/stdc++.h>
using namespace std ;
int main()
{
 int tc;
 cin>>tc;
 while(tc--){
  int n ;
  cin>>n;
  vector<long long int>v1;
  vector<long long int>v2;
  for(int i=0;i<n;i++)
  {
   int x;
   cin>>x;
   v1.push_back(x);
 
  }
  for(int i=0;i<n;i++)
  {
   int y;
   cin>>y;
   v2.push_back(y);
 
  }
  long long int minV1 = *min_element(v1.begin(),v1.end());
  long long int minV2 = *min_element(v2.begin(),v2.end());
  long long int sum=0;
  for(int i=0;i<n;i++){
    sum = sum+max(v1[i]-minV1,v2[i]-minV2);
  }
  cout<<sum<<endl;
  sum=0;
 v1.clear();
 v2.clear();
 }
 
 return 0;
}
