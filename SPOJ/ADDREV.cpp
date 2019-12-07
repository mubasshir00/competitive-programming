#include<bits/stdc++.h>
using namespace std ;
int rev(int num)
{
    int rem=0;
    int reverse =0;

    while(num>0)
    {
        rem=num%10;
        reverse = reverse *10+ rem;
        num/=10;
    }
    return reverse ;
}


int main()
{
    int a,b ;
    int n ;
    cin>>n;
    while(n--){
    cin>>a>>b;
    int sum=0;
    sum=rev(a)+rev(b);
    cout<<rev(sum)<<endl;
    }
    return 0 ;
}
