#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long tc;
   cin>>tc;
   while(tc--)
   {
       long long a,b,n,S;
       cin>>a>>b>>n>>S;
       if((a*n)==S)
       {
           cout<<"YES"<<endl;
       }
       else if(b>=S)
       {
           cout<<"YES"<<endl;
       }
       else if((a*n)<S)
       {
           if((S-(a*n)) <=b )
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
       else
       {
           if(n>S and b>S)
           {
               cout<<"NO"<<endl;
           }
          else if( (((a*n)-((a*n)-S))%n) <=b)
           {
               cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
       }
   }
    return 0;
}
