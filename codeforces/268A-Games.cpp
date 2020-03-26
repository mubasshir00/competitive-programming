#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long n ;
   cin>>n;
   long long arr1[n],arr2[n];
   for(long long i=0;i<n;i++)
   {
       cin>>arr1[i]>>arr2[i];
   }
   long long count =0;
   for(long long i=0;i<n;i++)
   {
       for(long long j=0;j<n;j++){
       if(arr1[i]==arr2[j])
       {
           count++;
       }
       }
   }
   cout<<count<<endl;

    return 0 ;
}
