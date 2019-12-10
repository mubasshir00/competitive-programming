#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string a,b;
    cin>>a>>b;
    long long n1 = a.length();
    long long n2 = b.length();
 
    if(a==b )
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<max(n1,n2)<<endl;
    }
    return 0;
}
