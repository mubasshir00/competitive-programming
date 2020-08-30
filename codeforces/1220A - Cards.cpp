#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int m ;
    cin>>m;
    string s;
    cin>>s;
    int z=0,e=0,r=0,o=0,n=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='z')z++;
        if(s[i]=='e')e++;
        if(s[i]=='r')r++;
        if(s[i]=='o')o++;
        if(s[i]=='n')n++;
    }
    int zero = min(z,min(e,min(r,o)));
    e=e-zero;
    o=o-zero;
    int one = min(n,min(e,o));
    for(int i=0;i<max(0,one);i++)
    {
        cout<<"1 ";
    }
    for(int i=0;i<zero;i++)
    {
        cout<<"0 ";
    }
    return 0;
}
