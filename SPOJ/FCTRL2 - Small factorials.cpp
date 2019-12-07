#include<bits/stdc++.h>
using namespace std ;
#define max 500
int multiply(int x,int res[],int res_size);
void factorial(int n)
{
    int res[max];
    res[0]=1;
    int res_size = 1;
    for(int x=2;x<=n;x++)
        res_size = multiply(x,res,res_size);

        for(int i=res_size-1;i>=0;i--)
            cout<<res[i];
            cout<<endl;

}
int multiply(int x,int res[],int res_size)
{
    int carray =0 ;
    for(int i=0;i<res_size;i++)
    {
        int prod = res[i]*x +carray;
        res[i]=prod%10;
        carray = prod/10;
    }
    while(carray)
    {
        res[res_size]= carray%10;
        carray = carray/10;
        res_size++;
    }
    return res_size;
}

int main()
{
    int n,tc ;
    cin>>tc;
    while(tc--){
    cin>>n;
    factorial(n);
    }

    return  0 ;
}
