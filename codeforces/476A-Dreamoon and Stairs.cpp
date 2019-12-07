#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ,m ;
    long long a ;
    cin>>n>>m;
    if(m>n)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(n%2==1)
    {
      a= (n/2)+1;
    }
    else
    {
        a=n/2;
    }
    int b = a%m;
    if(b==0)
    {
        cout<<a<<endl;
    }
    else
    {
        int c= a/m ;
        cout<< (c+1)*m<<endl;
    }
    return 0 ;
}
