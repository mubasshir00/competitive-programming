#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    long long arr[1000];
    long long arr1[1000];
    cin>>n;
    int m =0,c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr1[i])
        {
            m++;
        }
        if(arr[i]<arr1[i])
        {
            c++;
        }
    }
    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }
    else if(m<c)
    {
        cout<<"Chris"<<endl;
    }
    else cout<<"Friendship is magic!^^"<<endl;
    return 0;

}
