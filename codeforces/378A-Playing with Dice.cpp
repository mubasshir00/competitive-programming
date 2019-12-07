#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a,b ;
    int aw =0,d =0,bw=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        if(abs(a-i)<abs(b-i))
        {
            aw++;
        }
        else if (abs(a-i)== abs(b-i))
        {
            d++;
        }
        else{
            bw++;
        }
    }
    cout<<aw<<" "<<d<<" "<<bw<<endl;
    return 0 ;
}
