#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i,j;
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)

    {
if(i%2==1)
{
    for(int j=1;j<=m;j++)
    {
        cout<<"#";
    }
}
else if(i%2==0){
if(i%4==0)
{

cout<<"#";
    for(j=2;j<=m;j++){
        cout<<".";
    }

}
else 
{
   
    for(int j=1;j<m;j++)
    {
        cout<<".";
    }
        cout<<"#";

}

    }
    cout<<""<<endl;
    }
    return 0;
}
