#include<bits/stdc++.h>
using namespace std;

int main()
{

   int n,c0 =0,c1=0;
   string s ;

   cin>>n;
   while(n--){
   cin>>s;
   if(s=="X++" || s=="++X")
   {
       c0++;
   }
   else
   {
       c0--;
   }
   }
   cout<<c0<<endl;
}
