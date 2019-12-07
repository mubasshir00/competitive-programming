#include<bits/stdc++.h>
using namespace std ;
long long int decTobin(long long int n)
{
    long long int binaryNum =0;
     long long int remainder =0,i=1 ;
    while(n!=0)
    {
        remainder = n%3;
        n/=3;
        binaryNum += remainder*i;
        i*=10;
    }
    return binaryNum ;
}
int main()
{
    long long int x ;
    while(cin>>x)
    {
        if(x<0)break;

        cout<<decTobin(x)<<endl;
    }
    return 0 ;
}
