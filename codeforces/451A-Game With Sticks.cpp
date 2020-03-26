#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long n ,m;
   cin>>n>>m;
   if(n==1 || m==1)
   {
       cout<<"Akshat"<<endl;
       return 0;
   }
   long long ans = min(n,m);
   if(ans%2==1)
   {
       cout<<"Akshat";
   }
   else cout<<"Malvika";

    return 0 ;
}
