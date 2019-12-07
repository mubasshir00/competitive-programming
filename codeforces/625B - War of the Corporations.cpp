#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s,s1;
    cin>>s>>s1;
    int a = s.length();
    int b = s1.length();
    int ans = 0;
    int pos =0;
    pos= s.find(s1);
    while(pos!=-1)
    {
        ans ++;
        pos = s.find(s1,pos+b);

    }
    cout<<ans<<endl;
    return 0 ;
}
