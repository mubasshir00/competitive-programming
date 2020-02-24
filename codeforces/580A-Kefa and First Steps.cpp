#include<bits/stdc++.h>
using namespace std ;
int main()
{

   long long n;
   cin>>n;
   vector<long long>v;
   for(int i=0;i<n;i++)
   {
       int x ;
       cin>>x;
       v.push_back(x);

   }
   long long count =0;
   long long ans=0;
   for(int i=0;i<v.size()-1;i++)
   {
       if(v[i]<=v[i+1])
       {
           count++;
       }
       else
       {
           count =0;
       }
       ans= max(ans,count);
   }
   cout<<ans+1<<endl;
    return 0 ;
}
