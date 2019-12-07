#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    string s  ;
    cin>>s;
    int len = s.length();
    for(int i =len-1;i>=0;i--)
    {
        if(s[i]==s[i-1])
        {
            s.erase(i-1,2);
        }
    }
    cout<<s<<endl;
    return 0 ;
}
