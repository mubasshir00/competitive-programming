#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m){
        cout<<"-1"<<endl;
    }
    else{
    if(n%2==0)
    {
        int r =n/2;
        while(r<=n){
        if(r%m==0)
        {
            break;
        }
        else{r++;}

        }
          cout<<r;
    }
    else
    {
        int r =(n/2)+1;
        while(r<=n){
        if(r%m==0)
        {
            break;
        }
        else{r++;}

        }
          cout<<r;
    }
    }
    return 0 ;
}
