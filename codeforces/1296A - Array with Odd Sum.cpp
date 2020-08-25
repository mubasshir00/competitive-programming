#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        int counta =0;
        int countb =0;
        int f=1;
        long long n ;
        long long arr[10000];
        cin>>n;
        int sum =0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2==1)
        {
            cout<<"YES"<<endl;
        }
        //else cout<<"NO"<<endl;
        else {

            for(int i=0;i<n;i++)
            {
               if(arr[i]%2==1)counta++;
               if(arr[i]%2==0)countb++;
            }
           if(counta != 0 and countb!=0)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;

        }

    }
    return 0;
}
