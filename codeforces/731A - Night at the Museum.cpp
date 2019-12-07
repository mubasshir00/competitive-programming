#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    int sum =0;
   // int ax = 'b'-0;
   // cout<<ax;

    cin>>s;

   int len =s.length();
   int x =0,y=0;
   for(int i=0;i<len;i++)
   {
       x = s[i]-'a';
       sum+= min(abs(x-y),26-abs(x-y));
         y =x;
       //cout<<x<<endl;
   }
   cout<<sum<<endl;

    return 0 ;
}
