#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int a1,a2,a3;
   int b1,b2,b3;
   int n,a,b ;
   int sum=0 ;
   int sumb=0;
   cin>>a1>>a2>>a3;
   cin>>b1>>b2>>b3;
   cin>>n;
   sum=(a1+a2+a3);
   sumb=(b1+b2+b3);
   if(sum%5!=0)
   {
       a++;
   }
   if(sumb%10!=0)
   {
       b++;
   }
   if(((sum/5)+(sumb/10)+a+b)<=n)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

    return 0 ;
}
