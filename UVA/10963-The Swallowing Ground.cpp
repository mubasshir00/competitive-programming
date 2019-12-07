#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ;
    scanf("%d",&tc);
    //printf("\n");
    int k=1;
    while(tc--)
    {
        //set<int>s;
        int n,a,b,c;
        cin>>n;
        cin>>a>>b;
        c=a-b;
        int fl =0;
        for(int i=0;i<n-1;i++)
        {
            cin>>a>>b;
            int d;
            d=(a-b);
        //int si =s.size();
        if(c!=d)
        {
            fl=1;
        }

        }
        if(fl==0)printf("yes\n");
        else printf("no\n");
        if(tc)printf("\n");
        //s.clear();
    }
    return 0;
}
