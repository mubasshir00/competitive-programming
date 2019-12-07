#include<bits/stdc++.h>
using namespace std ;
long long int finddigit(long long int n)
{
    if(n<0)return 0;
    if(n<=1)return 1 ;
    double  digit =0 ;
    for(int i =2;i<=n;i++)
        digit+=log10(i);

        return floor(digit)+1;

}

int main()
{
    long long int tc ,n ;
    cin>>tc;
    while(tc--)
    {
      cin>>n;

    cout<<finddigit(n)<<endl;
    }
    return 0 ;
}
