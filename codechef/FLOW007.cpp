
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string S ;
    int n,a,b ;
    cin>>n;
    while(n--)
    {
        cin>>S;
        reverse(S.begin(),S.end());
        stringstream R(S);
       long long int x =0;
       R>>x;
       cout<<x<<endl;
    }
    return 0 ;
}
