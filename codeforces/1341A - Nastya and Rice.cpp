#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long tc;
    cin>>tc;
    while(tc--)
    {
        long long n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        long long temp1 = (a+b)*n;
        long long temp2 = (a-b)*n;
        long long temp3 = (c+d);
        long long temp4 = (c-d);
        if(temp2<=temp3 and temp2>=temp4){
            cout<<"Yes"<<endl;
        }
        else if(temp1<=temp3 and temp1>=temp4)
        {
            cout<<"Yes"<<endl;
        }
        else if(temp1<=temp3 and temp2>=temp4){
            cout<<"Yes"<<endl;
        }
         else if(temp1>=temp3 and temp2<=temp4){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    return 0;
}
