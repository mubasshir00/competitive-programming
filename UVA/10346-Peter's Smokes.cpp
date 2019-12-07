#include <bits/stdc++.h>
using namespace std;


int main()
{
   long long  int a,b,x,y,z;
    while(cin>>a>>b)
    {
        int s=a;
        while(1){
                if(a<b)
                {
                    cout<<s<<endl;
                    break;
                    continue;
                }
               s=s+(a/b);
              a= (a/b)+(a%b);
        }
       // cout<<s+x+y<<endl;
    }
    return 0;
}
