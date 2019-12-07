#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n, k ,count = 0,counta=0 ,countb  ;
    int a[1005];
    scanf("%d%d",&n,&k);
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {

        if(a[i]>=a[k-1] && a[i]>0)count++;

    }

   printf("%d\n",count);
    count = 0;

    return 0 ;
}
