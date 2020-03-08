#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<char>v;
    int n ;
    cin>>n;
    string s ;
    int c = 0,c1 = 0,c2=0;
   while(n--)
    {
        cin>>s;
        v.push_back(s[0]);
 
    }
   for(int i=0;i<v.size();i++)
   {
       if(v[i]!=v[i+1])c++;
   }
   cout<<c;
    return 0 ;
}
