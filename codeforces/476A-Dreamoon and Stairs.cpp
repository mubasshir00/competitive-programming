#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n ,m;
    cin>>n>>m;
    int temp1 = ((n-(n%2))/2) + (n%2);
   // cout<<temp1<<endl;
    if(n<m)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(temp1%m!=0)
    {
        //(((temp1/m)+1)*m);

        temp1= temp1+(m-(temp1%m));
        cout<<temp1<<endl;
    }
    else cout<<temp1<<endl;
    return 0;
}
