#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int price = INT_MAX;
    int sum =0;
    while(n--)
    {
        int a,p;
        cin>>a>>p;
        price =min(price,p);
        sum=sum+(price*a);
    }
    cout<<sum<<endl;
    return 0;
}
