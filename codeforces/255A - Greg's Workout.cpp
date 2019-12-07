#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a[1000];
    int n ;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int sum=0,sum1=0,sum2=0;
    for(int i=1;i<=n;i++)
    {
        if(i%3==1)
        {
            sum=sum+a[i];
        }
        if(i%3==2)
        {
            sum1=sum1+a[i];
        }
        if(i%3==0)
        {
            sum2=sum2+a[i];
        }

    }
    if(sum>sum1 && sum>sum2)
    {
        cout<<"chest"<<endl;
    }
else if(sum2>sum && sum2>sum1)
{
    cout<<"back"<<endl;
}
   else cout<<"biceps"<<endl;
  /* cout<<sum<<endl;
   cout<<sum1<<endl;
   cout<<sum2<<endl;*/
    return 0 ;
}
