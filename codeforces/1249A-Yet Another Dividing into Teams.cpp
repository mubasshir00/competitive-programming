#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int f=0;
        int n;
        cin>>n;
        int arr[1000];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=1;i<n;i++)
        {
            if((arr[i]-arr[i-1])==1)
            {
                f=1;
                break;
            }
        }
        if(f==1){
            cout<<2<<endl;
        }
        else cout<<1<<endl;
    }
    return 0;
}
