#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,k;
    cin>>n>>k;
    int count =0;
    int arr[9000];
    for(int i=0;i<n;i++)
    {
        int x ;
        cin>>x;
        arr[i]=(5-x);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=k)count++;
    }
    cout<<(count-(count%3))/3<<endl;

    return 0;
}
