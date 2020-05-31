#include<bits/stdc++.h>
using namespace std ;
int feyn[1000];
long long Feynman(long long x)
{
    if(x==1)return 1 ;

    feyn[x]= (x*x)+Feynman(x-1);

    return feyn[x];

}

int main()
{


        long long a;
        while(cin>>a){

        if(a==0)return 0 ;
        else
        cout<<Feynman(a)<<endl;
        }


    return 0 ;
}
