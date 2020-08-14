#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,m,a,b;
    cin>>n>>m>>a>>b;
   if(n%m==0)
    {
        int tempX = (n/m)*b;
        cout<<min(tempX,(n*a))<<endl;
    }
    else
    {
       // int tempA = (((n/m)*b)+((n%m)*a));
       // cout<<tempA<<endl;
      //  int tempB = (((n/m)*b)+b) ;
      //  cout<<tempB<<endl;
       cout<<min( n*a , min( (((n/m)*b)+((n%m)*a)) , (((n/m)*b)+b) ))<<endl;
    }
    return 0;
}
