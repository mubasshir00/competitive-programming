#include<bits/stdc++.h>
using namespace std;
int main()
{
   double a1,a2,a3;
   double b1,b2,b3;
   cin>>a1>>a2>>a3;
   cin>>b1>>b2>>b3;
   int n;
   cin>>n;
   double tempCup = ceil((a1+a2+a3)/5);
   double tempMedal = ceil((b1+b2+b3)/10);
   if((tempCup + tempMedal)<=n){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
    return 0;
}
