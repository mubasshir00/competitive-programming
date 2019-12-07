#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int ans=0;
    int a[1000],b[1000];
    cin>>n;
    for(int i=0;i<n;i++)

    {
        cin>>a[i]>>b[i];

    }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(i!=j &&  a[i]==b[j] )
            ans++;

    }
    cout<<ans<<endl;
    return 0 ;
}
