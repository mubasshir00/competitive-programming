#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int count =0;
   for(int i=0;i<s.length();i++)
   {
       for(int j=i+1;j<s.length();j++)
       {
           for(int k=j+1;k<s.length();k++)
           {
               if(s[i]=='Q' and s[j]=='A' and s[k]=='Q')
               {
                   count++;
               }
           }
       }
   }
   cout<<count<<endl;
    return 0;
}
