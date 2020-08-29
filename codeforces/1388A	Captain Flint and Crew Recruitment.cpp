#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int tc ;
   cin>>tc;
   while(tc--)
   {
     int n ;
     cin>>n;
     if(n<=30){
        cout<<"NO"<<endl;
     }
     else
     {

         int temp1 = n-30;
         if(n==36 || n==44 ||n==40)
         {
             cout<<"YES"<<endl;
             cout<<6<<" "<<10<<" "<<15<<" "<<(n-31)<<endl;
         }
         else if(temp1!=6){
             cout<<"YES"<<endl;
         cout<<6<<" "<<10<<" "<<14<<" "<<temp1<<endl;
         }
         else {
             cout<<"YES"<<endl;
         cout<<15<<" "<<10<<" "<<14<<" "<<temp1-9<<endl;
         }
     }
   }
    return 0;
}
