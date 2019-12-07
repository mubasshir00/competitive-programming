#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a1,a2,a3,a4;
    int ans=0;
    string s ;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            ans=ans+a1;
        }
        if(s[i]=='2')
        {
            ans =ans+a2;
        }
        if(s[i]=='3')
        {
            ans =ans+a3;
        }
        if(s[i]=='4')
        {
            ans =ans+a4;
        }
    }
    cout<<ans<<endl;
    return 0;
}
