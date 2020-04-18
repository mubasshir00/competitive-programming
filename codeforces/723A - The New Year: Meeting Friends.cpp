#include<bits/stdc++.h>
using namespace std ;
int main()
{
   int arr[5];
   for(int i=0;i<3;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+3);
   cout<<abs(arr[0]-arr[1])+abs(arr[1]-arr[2])<<endl;
    return 0 ;
 
}
