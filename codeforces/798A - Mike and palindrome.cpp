#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin>>s;
    int len = s.length();
    int count = 0;
    for(int i=0;i<len/2;i++)
 
    {
        if(s[i] != s[len-i-1])
        {
            count++;
        }
    }
   // cout<<count;
    if(count==1)
    {
        cout<<"YES"<<endl;
    }
 
    else if(count==0 and len%2==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
