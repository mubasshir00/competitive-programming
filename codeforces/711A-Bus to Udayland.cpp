#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int f=0;
    int count =0;
    cin>>n;
    char C[10000];
    for(int i=1;i<=(n*5);i++)
    {
        cin>>C[i];
    }
    if(n==1)
    {
        for(int i=1;i<=5;i++)
        {
            if(C[i]=='O' and C[i+1]=='O')
            {
                f=1;
                C[i]='+';
                C[i+1]='+';
                break;
            }
            else f=0;
        }

        if(f==1)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=5;i++)
            {
                cout<<C[i];
            }
        }
        else cout<<"NO"<<endl;
    }

    else {
    for(int i=1;i<=(n*5);i++)
    {
        if(C[i]=='O' and C[i+1]=='O')
        {
            if(i%5==0 and (i+1)%5==1)
            {
                count++;
            }
            else {
            C[i]='+';
            C[i+1]='+';
            f=1;
            break;
            }
        }
        else f=0;
    }
    if(f==1)
    {
        cout<<"YES"<<endl;
        for(int i=1;i<=(n*5);i++)
        {
            cout<<C[i];
            if(i%5==0)cout<<endl;
        }
    }
    else cout<<"NO"<<endl;
    }
    return 0;
}
