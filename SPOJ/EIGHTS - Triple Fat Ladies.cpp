#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
    long long n ;
    cin>>n;
    if(n==1)
    {
        cout<<"192"<<endl;
    }
    else
    {
        cout<<192+(n-1)*250<<endl;
    }
    }
    return 0 ;
}

/*https://www.hitbullseye.com/Quant/Arithmetic-Geometric-Harmonic-Progressions.php
*/
