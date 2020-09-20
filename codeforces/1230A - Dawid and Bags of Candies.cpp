#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int a[6];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    if((a[1-1]+a[2-1])==(a[3-1]+a[4-1])){
        cout<<"YES"<<endl;
    }
    else if((a[2-1]+a[3-1]) == (a[1-1]+a[4-1])){
        cout<<"YES"<<endl;
    }
    else if((a[1-1]+a[3-1]) == (a[2-1]+a[4-1])){
        cout<<"YES"<<endl;
    }
    else if((a[1-1]+a[4-1]) == (a[2-1]+a[3-1])){
        cout<<"YES"<<endl;
    }
    else if((a[1-1]+a[2-1]+a[3-1])==a[4-1]){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    return 0 ;
}
