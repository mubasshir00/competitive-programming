#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int tc,z=1;
    cin>>tc;
    while(tc--)
    {
        int Pd,Pm,Py;
        int Bd,Bm,By;
        scanf("%d/%d/%d",&Pd,&Pm,&Py);
        scanf("%d/%d/%d",&Bd,&Bm,&By);



            if(Pd<Bd)Bm=Bm+1;
            if(Pm<Bm)By=By+1;
            int Old =  Py-By;
            if(Old>130)
            {
                cout<<"Case #"<<z++<<": Check birth date"<<endl;
            }
            else if(Old<0)
            {
                 cout<<"Case #"<<z++<<": Invalid birth date"<<endl;
            }
            else
            {
                    cout<<"Case #"<<z++<<": "<<Old<<endl;
            }





    }
    return 0 ;
}
