#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(a>b){
            swap(a,b);
        }
        if( (b+x)<=n){
            cout<<abs(a-(b+x))<<endl;
        }
        else if( (b+x)>n ){
            if( (a-(x-(n-b)))>=1 ){
                cout<<abs( (a-(x-(n-b))) - (n) )<<endl;
            }
            else {
                cout<<n-1<<endl;
            }
        }

    }
    return 0;
}
