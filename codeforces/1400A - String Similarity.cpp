#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long n ;
        cin>>n;
        string s ;
        cin>>s;
        //cout<<s[0];
        for(int i=0;i<s.length();i=i+2)
        {
           cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
