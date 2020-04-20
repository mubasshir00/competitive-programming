#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    set<char>Set;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        Set.insert(s[i]);
    }
    if(s[0]=='-')
    {
        if(s[s.length()-1]=='0' and s.length()==3)
        {
            cout<<0;
        }
        else{
       if((s[s.length()-1]-'0')>(s[s.length()-2]-'0'))
       {
           for(int i=0;i<s.length()-1;i++)
           {
               cout<<s[i];
           }
       }
       else  if((s[s.length()-1]-'0')<=(s[s.length()-2]-'0'))
       {
           for(int i=0;i<s.length()-2;i++)
           {
               cout<<s[i];
           }
           cout<<s[s.length()-1];
       }
        }
    }
    else cout<<s<<endl;
    return 0;

}
