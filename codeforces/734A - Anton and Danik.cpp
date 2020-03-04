#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    string s ;
    cin>>s;
    int Da =0 ;
    int An =0 ;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='D')Da++;
        if(s[i]=='A')An++;

    }
    if(An>Da)cout<<"Anton"<<endl;
    else if(Da>An)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0 ;
}
