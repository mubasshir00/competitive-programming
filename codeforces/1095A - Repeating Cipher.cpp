#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    if(n<=1){
    cout<<s[0];
    }
    else if(n<4)
    {
        cout<<s[0]<<s[1];
    }
    else if(n<7)
    {
        cout<<s[0]<<s[1]<<s[3];
    }
    else if(n<11)
    {
        cout<<s[0]<<s[1]<<s[3]<<s[6];
    }
    else if(n<16)
    {
        cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10];
    }
    else if(n<22)
    {
        cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15];
    }
    else if(n<31)
    {
        cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[22];
    }
    else if(n<39)
    {
        cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[22]<<s[30];
    }
    else if(n<48)
    {
        cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[22]<<s[30]<<s[38];
    }
    else cout<<s[0]<<s[1]<<s[3]<<s[6]<<s[10]<<s[15]<<s[22]<<s[30]<<s[38]<<s[47];
    return 0 ;
}
