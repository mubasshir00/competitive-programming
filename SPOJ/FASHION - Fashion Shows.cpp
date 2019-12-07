#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a[10005],b[10005];
    int tc ;
    int n ,sum=0;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);
        for(int i=0;i<n;i++)
        {
            sum+=a[i]*b[i];
        }
        cout<<sum<<endl;
        sum=0;

    }
    return 0 ;
}
