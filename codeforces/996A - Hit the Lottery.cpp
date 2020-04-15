#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int arr[5] = {100,20,10,5,1};
    long long n ;
    cin>>n;
    int sum =0;
    for(int i=0;i<5;i++)
    {
        if(n>=arr[i])
        {

            sum = sum + (n/arr[i]);
           // cout<<sum<<endl;
        }
        n =  n%arr[i];
    }
    cout<<sum<<endl;
    return 0 ;
}
