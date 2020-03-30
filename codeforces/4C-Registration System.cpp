#include<bits/stdc++.h>
using namespace std ;
int main()
{


   unordered_map<string ,int> umap ;
   int n ;
   string s ;
   cin>>n;
   while(n--)
   {
       cin>>s;
      // umap[i] = s;
       umap[s]++;

       if(umap[s]==1)
       {
           cout<<"OK"<<endl;
       }
       else
       {
           cout<<s<<umap[s]-1<<endl;
       }

        }





    return 0 ;
}
