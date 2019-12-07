
#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int tc,count =0 ;
   string n ;
   cin>>tc;
   while(tc--)
   {
       cin>>n;
       int len = n.length();
       for(int i=0;i<len;i++)
       {
           if(n[i]=='4')count++;
       }
       cout<<count<<endl;
        count=0;
   }

    return 0 ;
}
