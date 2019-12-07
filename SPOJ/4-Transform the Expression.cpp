#include<bits/stdc++.h>
using namespace std ;
int main()
{
    stack<char>s;
    stack<char>st;
    int tc ;
    cin>>tc;
    while(tc--){
    string a ;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(isalpha(a[i]))
        {
            cout<<a[i];
        }
        else if(a[i]==')')
        {
            cout<<s.top();
           s.pop();
        }
        else if(a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' || a[i]=='^')
        {
            s.push(a[i]);
        }
    }
    cout<<endl;
    }
    return 0 ;
}
