#include<bits/stdc++.h>
using namespace std ;
int main()
{
   float n ,sum=0 ;
   cin>>n;
   int arr[1000];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       sum=sum+arr[i];
   }
   printf("%.12f",sum/n);

    return 0 ;
}
