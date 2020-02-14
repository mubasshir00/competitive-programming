#include<bits/stdc++.h>
using namespace std ;

int main()
{
   string s ;
   cin>>s;
   int n = s.length();

   sort(s.begin(), s.end());
   for(int i=0;i<s.length()-1;i++){
   if(s[i]!='+')
   cout<<s[i]<<"+";
   }
   cout<<s[n-1];
}
