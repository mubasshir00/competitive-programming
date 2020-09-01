#include<bits/stdc++.h>
using namespace std ;
int smallestDiv(long long n)
{
    if(n%2==0)
        return 2;
    for(int i=3;i*i<=n;i++)
    {
        if(n%i==0)
            return i;
    }
    return n ;
}
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long a,b;
        cin>>a>>b;
      //  cout<<smallestDiv(a)<<endl;
      if((a&1)==0)
      {
          cout<<a+(b<<1)<<endl;
      }
      else
        {
           long long temp1= a+(smallestDiv(a));
           cout<<temp1+((b-1)*(smallestDiv(temp1)))<<endl;
        }
    }
    return 0;
}
