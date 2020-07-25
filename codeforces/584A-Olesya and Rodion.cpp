#include<bits/stdc++.h>
using namespace std ;
int main()
{
      ios_base::sync_with_stdio(0);
       int  n;
       int t;
      cin>>n>>t;
      if(n==1 and t ==10  )
      {
          cout<<"-1"<<endl;
          return 0;
      }
      if(t==10)
      {
          for(int i=0;i<n-1;i++)
      {
          cout<<1;
      }
      cout<<0;
          return  0;
      }
      for(int i=0;i<n;i++)
      {
          cout<<t;
      }
      return  0 ;
}
