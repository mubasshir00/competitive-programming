#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n ;
    cin>>n;
    long long arr[100006];
    for(long long  i=0;i<n;i++){
        cin>>arr[i];
    }
    int count25 =0 , count50 =0 ,count100=0;
    for(long long i=0;i<n;i++)
    {
        if(arr[i]==25){
            count25++;
        }
       else if(arr[i]==50){
            count25--;
            count50++;
        }
       else if(arr[i]==100){
            if(count50>0){
                count50--;
                count25--;
            }
            else count25=count25-3;
 
         count100++;
        }
        if(count25<0 || count50<0){
        cout<<"NO"<<endl;
        return 0;
    }
 
    }
    cout<<"YES"<<endl;
    return 0;
}
