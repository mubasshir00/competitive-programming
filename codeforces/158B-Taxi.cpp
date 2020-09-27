#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin>>n;
    int arr[100009];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    int count4 =0;
    int count3 =0 ;
    int count2 =0;
    int count1 =0;
    for(int i=0;i<n;i++){
        if(arr[i]==4)count4++;
        if(arr[i]==3)count3++;
        if(arr[i]==2)count2++;
        if(arr[i]==1)count1++;
    }
   if(count1>count3){
     count1 = count1-count3;
   }
   else count1 = 0;
   int temp2 = count2%2;
   count2 =ceil(count2/2.00);
   if(count1!=0 and temp2==1){
        count1 = count1 - 2;
   }
   cout<<count4+count3+count2+ceil(count1/4.00)<<endl;
    return 0;
}
