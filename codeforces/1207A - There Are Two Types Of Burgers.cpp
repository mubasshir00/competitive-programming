#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int res1=0,res2=0;
        int b,p,f;
        int h,c;
        cin>>b>>p>>f;
        cin>>h>>c;
        b=b/2;
        if(h>c)
        {
            swap(h,c);
            swap(p,f);
        }
        res1 = (min(b,f))*c ;
        b=b-f;
        if(b>0){
        res2 = min(b,p)*h;
        }
        cout<<res1+res2<<endl;

    }
    return 0;
}
