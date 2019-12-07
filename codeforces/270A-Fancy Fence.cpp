#include<bits/stdc++.h>
using namespace std ;
 int main(){
 int a ;
 int n ;
 scanf("%d",&n);
 for(int i =0 ;i<n;i++){
 scanf("%d",&a);
 if(360%(180-a)==0)printf("YES\n");
 else printf("NO\n");
 }
    return 0 ;
 }
