#include<bits/stdc++.h>
using namespace std ;
bool check(int L)
{
  //bool flag = false;
if(L==1)return 0;
if(L==2)return 1;
if(L%2==0)return 0;
  for(int i = 3; i <=sqrt(L); ++i)
  {
      if(L%i == 0)
      {
          return 0 ;
      }
  }
  return 1;
}

int main()
{
    vector<int>v;
    vector<int>v1;
    int n ;
    int m,ans,res;
    while(cin>>n){
            if(n==0)break;
    m=n;
    bool prime[n+1];

    for(int i=2;i<=n;i++)
    {
       int u,k;
       u=m-i;
       if(check(i) and check(u))
       {
           res=i;
           ans=u;
           break;
       }
        }

   cout<<m<<" = "<<res<<" + "<<ans<<endl;
   res=0;
   ans=0;
 //  v.clear();
    }
}
