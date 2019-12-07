#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int  a[1008];
    int n ;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    double sum =0 ;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    double av  = 0;
    av= sum/n;
    printf("%.12lf\n",av);
    return 0 ;
}
