#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int count1=0,count2=0;
    string s ;
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='x' )
        {
            count1++;
        }
        else
        {
            count1=0;
        }
        if(count1>2)
        {
            count2++;
        }
    }
    cout<<count2<<endl;

}
