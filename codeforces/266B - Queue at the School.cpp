#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n , x ;
    cin>>n>>x;
    string s;
    cin>>s;
    while(1){
    if(x==0){
        break;
    }
    for(int i=1;i<n;i++)
    {
        if(s[i]=='G' and s[i-1]=='B'){
            swap(s[i-1],s[i]);
            i=i+1;
        }
    }
    x--;
    }
    cout<<s<<endl;
    return 0;
}
