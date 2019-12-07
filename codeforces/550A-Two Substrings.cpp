#include<bits/stdc++.h>
using namespace std ;
int main()
{

    string s ;
    int count=0,count1=0;
    cin>>s;
    if(s.find("AB")!=-1 and (s.find("BA",s.find("AB")+2))!=-1 || s.find("BA")!=-1 and (s.find("AB",s.find("BA")+2))!=-1  )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0 ;
}
