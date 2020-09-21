#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--){
         long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
         if( (x2-x)<(b-a) || (x-x1)<(a-b)){
            cout<<"No"<<endl;
         }
         else if((y2-y)<(d-c) || (y-y1)<(c-d)){
            cout<<"No"<<endl;
         }
         else if( x1 == x2  && (a+b)>0 ) {
            cout<<"No"<<endl;
         }
         else if(y1 == y2 && (c+d)>0){
            cout<<"No"<<endl;
         }
         else cout<<"Yes"<<endl;
 
    }
    return 0;
}
