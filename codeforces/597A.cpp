#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int k,a,b,c,d ,e,f,g,h;
    cin>>k>>a>>b;
    if(k==1)cout<<b-a+1<<endl;
    else if(a<=0 && b>=0)
    {
        d = ((b/k)-(a/k)+1);
        cout<<d<<endl;
    }
    else
    {
        if(a<0 && b<0){
        e = abs(a);
        f=abs(b);
        cout<<(e/k)-((f-1)/k)<<endl;
        }
        else if(a>0 && b>=a)
        {
            e = abs(a);
        f=abs(b);
        cout<<(f/k)-((e-1)/k)<<endl;
        }
    }
    return 0 ;


}
