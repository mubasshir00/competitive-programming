#include<bits/stdc++.h>
using namespace std ;
int main(){
   int n,t ;
   cin>>n>>t;
   if(n==1)
   {
       if(t==10)
      cout<<"-1"<<endl;
      else
        cout<<t<<endl;
   }
   else{
if(t==10)
   {
       if(n==2)cout<<"10"<<endl;
       else {
       cout<<"1";
       for(int i=1;i<n-2;i++)
       {
           cout<<"0";
       }
       cout<<"10";
       }
   }

   else{
   cout<<t;
   for(int i=1;i<n-1;i++)
   {
       cout<<"0";
   }
   cout<<t;
   }
   }
    return 0 ;
}
