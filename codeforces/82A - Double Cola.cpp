#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long n,m;
    string str[5] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>n;
    while(n>5)
    {
        n=(n/2)-2;
    }
   // cout<<n<<endl;
    cout<<str[n-1]<<endl;
    return 0;
}
