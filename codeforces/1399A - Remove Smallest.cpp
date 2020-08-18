#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int f =0;
        int arr[100];
        int n ;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)cout<<"YES"<<endl;
        else if(n==3)
        {
            int t =0;
             sort(arr,arr+n);
             for(int i=0;i<n-1;i++)
             {
                if(abs(arr[i]-arr[i+1])>1 )
                {
                   t =1;
                   break;
                }
                else
                {
                    t=0;
                }
              }
              if(t==0)cout<<"YES"<<endl;
              else cout<<"NO"<<endl;
        }
        else{
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
                if(abs(arr[i]-arr[i+1])<=1 )
                {
                    f++;
                }
        }
       // cout<<f<<endl;
        if(f>=n-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        f=0;
        }
    }
    return 0;
}
