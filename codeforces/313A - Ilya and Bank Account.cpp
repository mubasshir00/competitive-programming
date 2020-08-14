#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string s ;
    cin>>s;
    if(s[0]!='-')cout<<s<<endl;
    else if(s.length()==3)
    {
       // cout<<s.length()<<endl;
        if(s[2]=='0')
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<s[0]<<min(s[1]-'0',s[2]-'0')<<endl;
        }

    }
    else
    {

            for(int i=0;i<s.length()-2;i++)
            {
                cout<<s[i];
            }
            cout<<min(s[s.length()-2]-'0',s[s.length()-1]-'0')<<endl;

    }
    return 0;
}

