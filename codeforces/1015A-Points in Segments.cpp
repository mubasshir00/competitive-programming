#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,m ;
    cin>>n>>m;
int ans =0;
    int arr[200];
    memset(arr,0,sizeof(arr));
   for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++)
        {
            arr[j]=1;
        }
    }


    for(int i=1;i<=m;i++)
    {
        if(arr[i]==0)
        {
            ans++;
        }
    }
    int c=0;
    cout<<ans<<endl;
    for(int i=1;i<=m;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<" ";
        }

    }
    return 0 ;
}
