#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int arr[99999];
    int n ;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum =0;
    int c1=0,c2=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==-1 and sum==0)
        {
            c1++;
        }
         else if(arr[i]!=-1)
        {
            sum=sum+arr[i];
        }
        else
        {
            c2++;
            c2--;
            sum--;

        }
    }

     if(arr[n-1]==-1 and sum==0)c1=c1+1;
    cout<<c1+c2<<endl;
    return 0 ;
}
