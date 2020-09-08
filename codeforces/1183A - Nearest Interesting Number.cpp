#include<bits/stdc++.h>
using namespace std;

int sumofDigit(int n)
{
    int sum =0;
    while(1)
    {
        sum=sum+(n%10);
        n=n/10;
        if(n<=0)
        {
            return sum;
        }
    }
}
int main()
{
    int a ;
    cin>>a;
    for(int i=0;i<1000;i++)
    {
        if((sumofDigit(a+i))%4==0){
            cout<<a+i<<endl;
            return 0;
        }
    }
    return 0;
}
