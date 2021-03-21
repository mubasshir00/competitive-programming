#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string Str1,Str2 ;
    cin>>Str1>>Str2;
    reverse(Str2.begin(),Str2.end());
    if(Str1==Str2){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0;
}
