#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a[1000];
    int b,c,d,v[1000];

    cin>>b;
    for(int i=1;i<=b;i++)
    {

        cin>>a[i];
        v[a[i]]=i;


    }
    for(int i=1;i<=b;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0 ;
}
