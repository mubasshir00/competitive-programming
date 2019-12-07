#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t1,m1,t2,m2,t3,m3,t4,m4,a,b,c,d;
    int tc ;
    int j=1;
    scanf("%d",&tc);
    while(tc--){
    scanf("%d:%d %d:%d %d:%d %d:%d",&t1,&m1,&t2,&m2,&t3,&m3,&t4,&m4);
    a=(t1*60)+m1;
    b=(t2*60)+m2;
    c=(t3*60)+m3;
    d=(t4*60)+m4;
    if( c>b || d<a )cout<<"Case "<<j++<<": Hits Meeting"<<endl;
    else cout<<"Case "<<j++<<": Mrs Meeting"<<endl;

    }
    return 0 ;
}
