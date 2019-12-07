#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    int a[1000],b, n,p,q,count=0,j=1;
    cin>>tc;
    while(tc--)
    {
        int sum=0 ;
        cin>>n>>p>>q;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n&&i<p;i++)
        {
            sum=sum+a[i];
            if(sum>q)break;
            count++;

        }
        cout<<"Case "<<j++<<": "<<count<<endl;

        count =0 ;
    }
    return 0 ;
}
