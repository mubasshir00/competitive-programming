#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string a;
    cin>>a;
    int count =0,counta=0;
    long long int len = a.length();
    for(long long int i=0;i<len;i++)
    {
        if(a[i]=='4')
        {
            count++;
        }
        if(a[i]=='7')
        {
            counta++;
        }
    }
    if((count+counta)==7 || (count+counta)==4)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0 ;
}
