#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n,m;
    cin>>n;
    string s;
    m=n;
    cin>>s;
    int i =0;
    int counta=0;
    int countb =0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')counta++;
        if(s[i]=='0')countb++;
    }
    cout<<n-(2*min(counta,countb));
    return 0;
}
