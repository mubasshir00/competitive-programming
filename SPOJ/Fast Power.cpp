#include<bits/stdc++.h>
using namespace std ;
long long int m ;
long long int bigmod(long long int a,long long int b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
      long long  int ret = bigmod(a,b/2);
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

long long int b,p;
while(cin>>b>>p>>m)
{
    cout<<bigmod(b,p)<<endl;
}

    return 0 ;

}
