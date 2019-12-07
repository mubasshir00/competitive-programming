#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2)
        if(h1==0 and h2 ==0 and m1 ==0 and m2 ==0)break;

   else if(h2>h1)
    {
        int a = (h1*60)+m1;
        int b = (h2*60)+m2;
        cout<<b-a<<endl;
    }

    else
    {
        if(h1==h2)
        {
            if(m2>=m1)
            {
                cout<<m2-m1<<endl;
            }
            else
            {
                int a = (23-h1)*60;
        int b = h2*60;
        int c = 60-m1;
        cout<<a+b+c+m2<<endl;
            }
        }
        else {
        int a = (23-h1)*60;
        int b = h2*60;
        int c = 60-m1;
        cout<<a+b+c+m2<<endl;
        }

    }
    return 0 ;
}
