#include<bits/stdc++.h>
using namespace std ;
 int main()
 {

     int loc ,lm,d=0;
     int maxim=0,mini=0;
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }
     for(int i=0;i<n;i++)
     {
         if(a[i]>a[maxim])
            maxim=i;
            if(a[i]<=a[mini])
            mini=i;
     }
     if(mini>maxim){
      d=(n-1)-mini+maxim;
     }
else
{
    d=(n-2)-mini+maxim;
}
if(d<0)
     cout<<"0"<<endl;
else
    cout<<d<<endl;
//cout<<d<<endl;
     return 0 ;
 }
