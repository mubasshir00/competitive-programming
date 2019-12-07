#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n;
    long long int a[100000];
    while(scanf("%d",&n)==1){
            if(n==0)break;
    else{
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    int sum = 0 ;
    int maxsum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum<0)
        {
            sum=0;
        }
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    if(maxsum>0){
    cout<<"The maximum winning streak is "<<maxsum<<"."<<endl;
    }
    else
    {
        cout<<"Losing streak."<<endl;
    }
    }
    }
    return 0 ;
}
