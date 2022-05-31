#include<bits/stdc++.h>
using namespace std ;
int main()
{
 vector<int>v;
 for(int i=1;i<=100000;i++)
 {
  if(i%3 !=0 && i%10 !=3  ){
   v.push_back(i);
  }
 }
 int n ;
 cin>>n;
 while(n--)
 {
  int x ;
  cin>>x;
  cout<<v[x-1]<<endl;
 }
 return 0;
}

