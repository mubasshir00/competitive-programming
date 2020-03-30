#include<bits/stdc++.h>
using namespace std ;
int main()
{
    map<string , string>MAP;

    long long n;
    cin>>n;
    getchar();
    while(n--)
    {
        string a,b;
        getline(cin,a);
        getline(cin,b);
        MAP.insert(pair<string,string>(a,b));
    }
  // map<int,int>::iterator it ;

   int m;

   cin>>m;
   getchar();
   while(m--){
   string x;
   getline(cin,x);
   cout<<MAP[x]<<endl;
   }
    return 0 ;
}
