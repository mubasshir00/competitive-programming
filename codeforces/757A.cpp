#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin>>s;
    sort(s.begin(),s.end());
    long long  B1=0,u1=0,l1=0,b1=0,a1=0,s1=0,r1=0;
    for(long long  i=0;i<s.length();i++)
    {
         if(s[i]=='B')B1++;
        if(s[i]=='u')u1++;
        if(s[i]=='l')l1++;
        if(s[i]=='b')b1++;
        if(s[i]=='a')a1++;
        if(s[i]=='s')s1++;
        if(s[i]=='r')r1++;
    }
    u1/=2;
    a1/=2;
    int ans = min(B1,min(u1,min(l1,min(b1,min(a1,min(s1,r1))))));
    cout<<ans<<endl;
return 0 ;
}
