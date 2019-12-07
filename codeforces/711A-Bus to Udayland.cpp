#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    bool f =false;
    char a[1005][1005];
    cin>>n;
    int m ;
    m=n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='O' && a[i][j+1]=='O')
            {
                a[i][j]='+';
                a[i][j+1]='+';
                f=true;
                break;
            }

        }
        if(f==true)break;
    }
    if(f==true)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0 ;
    }
    else
    {
        cout<<"NO"<<endl;
        return 0 ;
    }
    return 0 ;
}
