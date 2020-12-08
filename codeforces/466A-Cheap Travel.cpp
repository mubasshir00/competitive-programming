#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int temp4 = INT_MAX;
    if(n<=m){
        temp4 = b;
    }
    int temp1 = n*a;
    int temp2 = ((( (n-(n%m)) /m)) * b)+b;
    int temp3 = (( (n-(n%m)) /m)*b) + ((n%m)*a);
   // cout<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<endl;
    cout<<min(temp1,min(temp2,min(temp3,temp4)))<<endl;
    return 0;
}
