#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    int count=0;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='7' || s[i]=='4'){
            count++;
        }
    }
    if(count==7 || count==4)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
