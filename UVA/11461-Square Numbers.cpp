#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int a,b;
   int c=0;
   while(scanf("%d%d",&a,&b))
    if(a==0)break;
   else
   {
       for(int i=a;i<=b;i++)
       {
           if(floor(sqrt(i))== ceil(sqrt(i)))
           {
               c++;
           }
       }
       cout<<c<<endl;
       c=0;
   }
    return 0;
}
