#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c;
    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            if((a*i) + (b*j) ==c )
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<=10000;i++)
    {
        for(int j=0;j<=10000;j++)
        {
            if((a*j) + (b*i) ==c )
            {
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    
    cout<<"No"<<endl;


    return 0 ;
}
