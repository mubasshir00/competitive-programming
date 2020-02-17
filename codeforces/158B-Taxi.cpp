#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,t;
    cin>>n;

    int arr[5]={0};
 for(int i=0;i<n;i++)
    {
        cin>>t;
        arr[t]++;

    }
    if(n==1){
        cout<<"1";
        return 0 ;
    }

   int ans = arr[4]+arr[3]+(arr[2]/2);
   int Extra1 = max(0,arr[1]-arr[3]);
   int z = Extra1;
   if(z%4==0 )
   {
      if(arr[2]%2==1)
           {
               ans = ans +(z/4)+1;
           }
           else{
           ans = ans + (z/4);
           }
   }
   else
   {

           if(z%4==3)
           {
               z=z-3;
               if(arr[2]%2==1)
               {
                   ans = ans + (z/4) + 2 ;
               }
               else
               {
                   ans = ans + (z/4)+1;
               }
           }
           else
           {

                   ans = ans + (z/4) +1;

           }



   }
   cout<<ans<<endl;





    return 0 ;
}
