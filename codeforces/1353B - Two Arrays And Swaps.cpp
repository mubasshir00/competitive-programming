#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[10000];
        int arr2[10000];
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>arr2[j];
        }
        int sum =0;
        sort(arr1,arr1+n);
        sort(arr2,arr2+n);
        reverse(arr2,arr2+n);
        for(int i=0;i<m;i++)
        {
            if(arr1[i]<arr2[i])
            {
                swap(arr1[i],arr2[i]);
            }
        }
         for(int i=0;i<n;i++){
            sum=sum+arr1[i];
         }
         cout<<sum<<endl;
    }
    return 0 ;
}
