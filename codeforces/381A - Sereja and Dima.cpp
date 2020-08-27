#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int arr[100003];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int ans[2]={0};
    int k=0;
    int i =n-1;
    int temp = n;
    int j =0;
   for(int k=0;k<n;k++)
    {
        if(arr[i]>arr[j])
        {
            ans[k%2]+=arr[i];
            i--;
        }
        else
        {
            ans[k%2]+=arr[j];
            j++;
        }
    }
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}
