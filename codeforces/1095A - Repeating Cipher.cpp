#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
   cin>>n;
   string s;
   cin>>s;
  // cout<<s[0];
  // cout<<s[1];
  int sum=0;
   for(int i=0;i<s.length();i++)
   {
       if((i+sum)<s.length())
       {
            cout<<s[i+sum];
       sum = sum+i;
       }
       else{
      break;
       }
   }
    return 0;
}
