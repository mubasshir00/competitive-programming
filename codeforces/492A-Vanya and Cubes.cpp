#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int i=1;
    int s=0;
    cin>>n;
    while(s<=n){

       s=s+((i*(i+1))/2);
       i++;
    }


    {
        cout<<i-2<<endl;
    }

    return 0 ;
}
