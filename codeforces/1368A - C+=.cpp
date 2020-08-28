#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    int a,b;
   int n ;
   int count =0;
   cin>>a>>b>>n;
  // int sum1 =0;
   //int sum2 =0;
   while(a<=n)
   {
       int sum1 =max(a,b);
      int  sum2 = a+b;
       a=sum1;
       b=sum2;
       count++;
   }
   cout<<count-1<<endl;
    }
    return 0 ;
}
