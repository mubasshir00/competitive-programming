#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    set<char>Set;
    cin>>s;
    long long a = s.length();
    for(int i=0;i<a;i++)
    {
        Set.insert(s[i]);
    }
    long long b = Set.size();
    if(b%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    return 0 ;
}
