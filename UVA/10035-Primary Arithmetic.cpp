#include<bits/stdc++.h>
using namespace std ;
int main()
{
   unsigned long long  int arr1,arr2 ;
    while(cin>>arr1>>arr2){
            if(arr1 ==0 and arr2 ==0)break;
 int carr=0;
    //cout<<v.size()<<endl;
     unsigned long long  int  count =0;
     unsigned long long  int m,n,sum=0;
  // cout<<count<<endl;

  while(arr1 || arr2)
  {
      m=0;
      n=0;

      m= arr1%10;
      n= arr2%10;
      arr1=arr1/10;
      arr2=arr2/10;

      sum= m+n+carr;

      if(sum>9)
      {
          count++;
          carr=1;
      }
      else
      {
          carr=0;
      }

  }

   if(count==0)
   {
       cout<<"No carry operation."<<endl;

   }
   else if (count==1)
   {
       cout<<count<<" "<<"carry operation."<<endl;
   }
   else
   {
       cout<<count<<" "<<"carry operations."<<endl;
   }



    }
    return 0 ;
}
