#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin>>tc;
    int x =0;
    while(tc--)
    {
      long long n;
      cin>>n;
      if(n==2)
      {
          cout<<"2"<<endl;
      }
      else if( (n&1)==1)
      {
          cout<<"1"<<endl;
      }
      else cout<<"0"<<endl;
    }
    return 0;
}
