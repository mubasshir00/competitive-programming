#include<bits/stdc++.h>
#include<string>
using namespace std ;
bool isNumber(string s)
{
    for (int i = 0; i < s.length(); i++)
        if ((s[i])>='a' and s[i]<='z' || s[i]>='A' and s[i]<='Z') {
            return false;
        }
 
    return true;
}
int main()
{
    string s1,s2,s3;
    string a,b,c,d;
    int tc ;
    cin>>tc;
    while(tc--)
    {
        int n,m,t,z=0;
        cin>>s1>>a>>s2>>b>>s3;
 
 
 
        if((isNumber(s1)) and (isNumber(s2)))
        {
            n=stoi(s1);
            m=stoi(s2);
            z = n+m;
            //23 + 47 = machula
            cout<<s1<<" "<<a<<" "<<s2<<" "<<b<<" "<<z<<endl;
        }
        if((isNumber(s2)) and (isNumber(s3)))
        {
            m=stoi(s2);
            n=stoi(s3);
            z=(n-m);
            cout<<z<<" "<<a<<" "<<s2<<" "<<b<<" "<<s3<<endl;
        }
        if(isNumber(s3) and isNumber(s1))
        {
            n = stoi(s3);
            m=stoi(s1);
            z=abs(n-m);
            cout<<s1<<" "<<a<<" "<<z<<" "<<b<<" "<<s3<<endl;
 
        }
 
        //cout<<z<<endl;
        z=0;
    }
    return 0 ;
}
