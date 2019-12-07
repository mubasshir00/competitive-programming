#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc ,z=1;
    cin>>tc;
    vector<int>v;
    while(tc--)
    {
        int k,Stm,Sth;
      scanf("%d %d:%d",&k,&Sth,&Stm);
      int a = (Sth*60) + Stm;
        while(k--)
        {
            int h,m1,m2;
            scanf("%d:%d %d",&h,&m1,&m2);
            int b = (h*60) +m1;

                if(b<a) b=b+(60*24);
                int d = b+m2;
                v.push_back(d);



        }
        sort(v.begin(),v.end());
        cout<<"Case "<<z++<<": "<<abs(v[0]-a)<<endl;
        v.clear();
    }
    return 0 ;
}
