#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ,t ;
    int n[10007];
    int sum=0;
    int j=1;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int i=1;i<=tc;i++)
    {
        if(n[i]>=0){
        sum=sum+n[i];
        }
    }
    printf("Case %d: %d\n",j++,sum);
    sum=0;
    }
    return 0 ;
}
