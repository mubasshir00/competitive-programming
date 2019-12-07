#include<bits/stdc++.h>
using namespace std ;
int main()
{
    vector<int>v;
     int n, a ;
    int b,c;
   while(scanf("%d",&n))
   {
       a=n;
       if(n==0)break;
       if(a<0)
       {
           cout<<a<<" = -1 x ";
           n*=-1;
       }
       else
       {
           cout<<a<<" = ";
       }


       for(int i=2;i<=sqrt(n);i++)
       {
           if(n%i==0)
           {
               v.push_back(i);
              // printf("%d x ",i);
               n=n/i;
               i=1;
           }
       }


           for(int j=0;j<v.size();j++)
           {
               cout<<v[j]<<" x ";
           }


       printf("%d\n",n);
v.clear();
   }

    return 0 ;
}
