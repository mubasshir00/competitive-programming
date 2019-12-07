#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;

int main()
{
    string s ;
    cin>>s;
    int f =0;
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]== '1' or s[i]=='4' and s[0]=='1'  )
        {

           if(s.find("444")!=-1){
            f=1;
           }
           else
            f=0;

        }
        else
        {
            f=1;
            break;
        }
    }
    if(f==1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0 ;
}
