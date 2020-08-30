#include<bits/stdc++.h>
using namespace std ;
int result[1000] = {0};
int fact(int n)
{
    if(n>=0){
        result[0]=1;
        for(int i=1;i<=n;i++)
        {
            result[i]=i*result[i-1];
        }
        return result[n];
    }

}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<fact(min(n,m))<<endl;
    return 0;
}
