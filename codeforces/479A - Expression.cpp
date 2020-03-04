#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1 and b==1 and c==1)
    {
        cout<<"3"<<endl;
    }
    else if(a==1 and b==1 and c!=1)
    {
        cout<<2*c<<endl;
    }
    else if(a==1 and b!=1 and c==1)
    {
        cout<<a+b+c<<endl;
    }
    else if(a!=1 and b==1 and c==1)
    {
        cout<<a*2<<endl;
    }
    else if(a==1 and b!=1 and c!=1)
    {
        int x = (b+1)*c;

        cout<<x<<endl;
    }
    else if (a!=1 and b!=1 and c==1)
    {

        int y = a *(b+c);
        cout<<y<<endl;
    }
    else if(a!=1 and b==1 and c!=1)
    {
        int x = (a+1)*c;
        int y = (c+1)*a;
        cout<<max(x,y)<<endl;
    }
    else cout<<a*b*c<<endl;
    return 0 ;
}
