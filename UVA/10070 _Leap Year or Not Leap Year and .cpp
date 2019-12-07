#include<bits/stdc++.h>
using namespace std ;

int Mod(string s,int b)
{
    int len  = s.length();
    int ans =0;
    for(int i=0;i<len;i++)
    {
        int digit = s[i]-'0';
        ans= ((ans*10)+digit)%b;
    }
    return ans ;
}
int main()
{
    string n ;
    int m;
    int E =0;
    while(cin>>n){
            if(E==1)
            {
                cout<<endl;
            }
            else
            {
                E=1;
            }
            int f =1;
            bool leap = (Mod(n,4)==0 && Mod(n,100)!=0) || Mod(n,400)==0;
            if(leap)
            {

                cout<<"This is leap year."<<endl;
                f=0;
            }
            if(Mod(n,15)==0)
            {
              //  cout<<"This is leap year."<<endl;
                  cout<<"This is huluculu festival year."<<endl;
                  f=0;

            }
            if(Mod(n,55)==0 && leap)
                {
                    cout<<"This is bulukulu festival year."<<endl;
                }

            if(f==1)
            {
                cout<<"This is an ordinary year."<<endl;
            }

    }
    return 0;
}
