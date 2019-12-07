#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    int pq=1;
    cin>>tc;
    while(tc--)
    {
        int n;
        int a,b,c,d,e,f;
        int cm=0,cj=0;
        cin>>a;
        while(a--)
        {
            cin>>n;

            cm+=(n/30)*10+10;
            cj+=(n/60)*15+15;
        }
        cout<<"Case "<<pq++<<": ";
        if(cm<cj)
        {
            cout<<"Mile "<<cm<<endl;
        }
        else if(cm==cj)
        {
            cout<<"Mile Juice "<<cj<<endl;;
        }
       else if(cj<=cm)
        {
            cout<<"Juice "<<cj<<endl;
        }
    }
    return 0 ;
}
