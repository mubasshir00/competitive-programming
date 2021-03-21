#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int arr[1000];
    int sum =0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    sum = floor(sum/2);
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int tempSum =0,count=0;
    for(int i=0;i<n;i++)
    {
        tempSum = tempSum + arr[i];
            count++;
        if(tempSum>sum){
            break;
        }
    }
    cout<<count<<endl;
    return 0;
}
