#include<bits/stdc++.h>
using namespace std;
int main(){
    long long tc;
    cin>>tc;
    long long n ;
    while(tc--)
    {
        cin>>n;
        if(n==1)cout<<"-1";
        else
        {
            cout<<"2";
            for(int i=0;i<n-1;i++)
            {
                cout<<"3";
            }
        }
        cout<<endl;
    }
    return 0;
}
