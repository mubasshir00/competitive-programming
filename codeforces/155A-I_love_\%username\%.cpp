#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , k,x,z,c=0;
    cin>>n;
    cin>>x;
    z=x;
    while(n>1)
    {
        cin>>k;

        if(k>x){
            x=k;
            c++;
        }
        if(k<z)
        {
            z=k;
            c++;
        }
            n--;
    }
cout<<c<<endl;

    return 0 ;
}
