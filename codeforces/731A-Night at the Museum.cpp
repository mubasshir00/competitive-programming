#include<bits/stdc++.h>
using namespace std ;
int main()
{

    string s ;
    cin>>s;
    int sum = min(abs('a'-s[0]) , 26-abs('a'-s[0]) );
    //cout<<sum;
    for(int i=0;i<s.length()-1;i++)
    {
        //cout<<abs(s[i]-s[i+1])<<endl;
       sum =sum+ min((26-abs(s[i]-s[i+1])),(abs(s[i]-s[i+1])));
    }
    cout<<sum<<endl;
    return 0 ;
}
