#include<bits/stdc++.h>

using namespace std ;
int main()
{

int n;
cin>>n;
int sum=0;
int q = floor(sqrt(n));
for(int i=1;i<=q;i++)
{
    sum=sum+((n/i)-(i-1));
}
cout<<sum<<endl;
sum=0;
    return 0;
}
