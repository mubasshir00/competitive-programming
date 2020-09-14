#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        long long count =0;
        long long int a,b,c;
        cin>>a>>b;
         if(b>a){
            swap(a,b);
        }
        while(a>b){

        if((a>>3)>=b  and a%8==0 )
        {
            a=(a>>3);
            count++;
        }
      else  if((a>>2)>=b  and a%4==0){
            a=(a>>2);
            count++;
        }
      else  if((a>>1)>=b and a%2==0)
        {
            a=(a>>1);
            count++;
        }
        else break;
        }
          if(a==b){
            cout<<count<<endl;

        }
        else {
            cout<<"-1"<<endl;

        }
        count=0;
    }
    return 0;
}
