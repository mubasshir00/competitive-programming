#include<bits/stdc++.h>
using namespace std ;
int main()
{
   string s;
   cin>>s;
 //  sort(s.begin(),s.end());

if( min(s[0]-'0',9-(s[0]-'0')) ==0 ){
        cout<<s[0];
       }
       else {
        cout<< min(s[0]-'0',9-(s[0]-'0'));
       }

   for(int i=1;i<s.length();i++)
   {

       cout<<min(s[i]-'0',9-(s[i]-'0'));
   }
    return 0;
}
