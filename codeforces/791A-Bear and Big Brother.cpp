#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b,c,d;
    cin>>a>>b;
    int k=0;
    int i=3;
   int  j=2;

        while(a<=b)
        {
            k++;
            a=a*i;
            b=b*j;

        }

    cout<<k<<endl;
    return 0 ;
}
