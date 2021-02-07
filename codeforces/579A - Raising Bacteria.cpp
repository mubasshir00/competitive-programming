#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long int n;
    int count = 1;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    while(1)
    {
        if(n%2==1){
            count++;
            n--;
        }
        else {
            n=n/2;
        }
        if(n<=1){
            break;
        }
    }
    cout<<count<<endl;
    return 0 ;
}
