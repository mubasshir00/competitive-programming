#include<bits/stdc++.h>
using namespace std ;
int main()
{
    /*int c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    int sum =c1+c2+c3+c4+c5;*/
    int arr[100],sum=0;
    int n =5;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
    }
    if(sum!=0 and sum%5==0)
    {
        cout<<sum/5<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    return 0 ;
}
