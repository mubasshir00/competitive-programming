#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ,i=0;
    long long int a , b ;
    cin>>tc;
        while(cin>>a)
        {
            if(a%2==0)
            {
                b=a-1;
            }
            else
            {
                b=a;
            }
            cout<<b<<" ";
            i++;
            if(i==tc)
                break;
        }

    return 0 ;
}
