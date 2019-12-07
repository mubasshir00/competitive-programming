#include<bits/stdc++.h>
using namespace std ;
int main()
{
   pair<int,int>p[10000];
   int s,d ;
   cin>>s>>d;
   for(int i=0;i<d;i++)
   {
       cin>>p[i].first>>p[i].second;
   }
   sort(p,p+d);
   for(int i=0;i<d;i++)
   {
       if(p[i].first>=s)
       {
           cout<<"NO"<<endl;
           return 0 ;
       }
       else

           s=s+p[i].second;
   }
           cout<<"YES"<<endl;
return 0 ;



}
