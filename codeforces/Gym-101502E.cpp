#include<bits/stdc++.h>
using namespace std ;
int main()
{

    int tc ;
    int b =0;
    
    string s ;
    int n;
    cin>>tc;
    while(tc--)
    {
        int cb=0,ck=0,cl=0;
        b=0;
        cin>>n;
        while(n--)
        {
            cin>>s;
            if(s[0]=='b')cb++;
            if(s[0]=='k')ck++;
            if(s[0]=='l')cl++;
        }
        b= cb/2;
          cout<<min(b,min(ck,cl))<<endl;

    }
    return 0 ;
}
