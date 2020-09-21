#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int m,n;
    cin>>m>>n;
    int count =0;
    int temp1 = min(m,n);
    for(int i=0;i<=temp1;i++){
        for(int j=0;j<=temp1;j++){
            if( ((i*i + j)==m) and ( (i + j*j) ==n ) ){
               count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}
