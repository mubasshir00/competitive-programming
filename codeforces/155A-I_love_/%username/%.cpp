#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    int a,b;
    cin>>n>>a;
    int max = a ;
    int min = a ;
    int count =0;
      int y =n-1;
      while(y--)
    {
        cin>>b;
        if(max<b)
        {
            count++;
            max=b;

        }
        if(b<min)
        {
            count++;
            min=b;
        }
    }
    cout<<count<<endl;
    return 0 ;
}
