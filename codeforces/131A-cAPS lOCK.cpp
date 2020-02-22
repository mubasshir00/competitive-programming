#include<bits/stdc++.h>
using namespace std ;
int main()
{
   string s ;
   cin>>s;
   int count=0;
   for(int i =0;i<s.length();i++){
       if(s[i] >= 'A' and s[i] <= 'Z')
       {
           count++;
       }
   }
   //cout<<count;
   if( count==s.length()){
   transform(s.begin(),s.end(),s.begin(),::tolower);
   cout<<s;
   }
   else if(( s[0] >= 'a' && s[0] <='z') and (count == s.length()-1 ))
   {
       transform(s.begin(),s.end(),s.begin(),::tolower);
       s[0]=toupper(s[0]);
       cout<<s;
   }
   else cout<<s;



    return 0;
}
