#include<bits/stdc++.h>
using namespace std ;
int sum(int n)
{
    if(n!=0)
    {
        return (n%10 + sum(n/10));
    }
    else
        return 0;
}
int main()
{
    int n;
    cin>>n;
    int a=0;
    while(n>0)
    {
        a++;
        if(sum(a)==10)
        {
            n--;
        }
    }
    cout<<a<<endl;
    return 0 ;
}
