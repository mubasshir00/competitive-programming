#include<bits/stdc++.h>
using namespace std ;
int m =10;
int bigmod(int a,int b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        int ret = bigmod(a,b/2);
        return ((ret%m)*(ret%m))%m;
    }
    else
    {
        return ((a%m)*(bigmod(a,b-1)%m))%m;
    }
}
long long  int reveerse(long long int n)
{
   long long  int remainder =0,rev=0;
    while(n!=0)
    {
        remainder = n%10;
        rev = (rev*10)+remainder;
        n=n/10;
    }
    return rev ;
}
int sum (int a,int b)
{
    return a+b;
}
int main()
{

    long long int num,z=1 ;
  long long    int tc ;
     cin>>tc;
     while(tc--){
     cin>>num;
   long long   int te =num;
  long long    int sum = te+reveerse(num);
     while(1)
     {
         if(sum == reveerse(sum) )
         {
             break;
         }
         else
         {
            sum = sum+ reveerse(sum);
            z++;

         }
     }
     cout<<z<<" "<<sum<<endl;
     z=1,sum=0;
     }
    return 0 ;

}
