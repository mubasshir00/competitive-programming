//I code for marry Tamanna .
#include<bits/stdc++.h>
using namespace std ;
int main()
{
   long long n;
   cin>>n;
   while(n--){
    long long m;
    cin>>m;
    if((m&1)==1){
        cout<<"7";
        for(int i=0;i<((m-1)/2)-1;i++)
        {
            cout<<"1";
        }
    }
    else {
        for(int i=0;i<m/2;i++){
            cout<<"1";
        }
    }
    cout<<endl;
   }
    return 0;
}
