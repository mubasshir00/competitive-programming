#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long int n ,m;
   long long ans = 0;
   cin>>n>>m;
   if((2*m)<=n)
   {
       ans = (2*m)-1;
   }
   else
   {
       long long  z = 0;
       z = m - (((n-1)/2)+1);
      // cout<<z;
       ans = 2*z;
   }
   if(ans<=0)cout<<n<<endl;
   else cout<<ans<<endl;
        return 0 ;

}
