#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int tc ;

   string  a ;
   cin>>tc;
   while(tc--)
   {
       cin>>a;
       if(a=="4" || a=="1" || a=="78")cout<<"+"<<endl;
       else
       {
           int s = a.length();

           int fl=0;
           if (a[s-1]=='5' && a[s-2]=='3')
           {
               cout<<"-"<<endl;
           }
           else if(a[s-1]=='4' && a[0]=='9')
           {
               cout<<"*"<<endl;
           }
           else cout<<"?"<<endl;
       }
   }

    return 0 ;
}
