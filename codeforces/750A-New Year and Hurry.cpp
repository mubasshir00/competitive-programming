#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , k;
    cin>>n>>k;
    int arr[100];
    for(int i=1;i<=n;i++)
    {
        arr[i] = i*5;
    }
    int ans = 0 ;
    ans = 240;
    int z = 0;
    bool f =true;
    for(int i=1;i<=n;i++)
    {
       ans = ans - arr[i];
       if(ans<k)
       {
          cout<<i-1<<endl;
          return 0 ;
       }
    }
    cout<<n<<endl;

    return 0 ;
}
