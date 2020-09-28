#include<bits/stdc++.h>
using namespace std ;
int main()
{
   // vector < pair<int,string>>vec ;
    int arr[3];
    int n ;
    cin>>n;
    int countCh =0 ,countB =0 , countBi =0;
    for(int i=0;i<n;i++){
        int x ;
        cin>>x;
        if(i%3 ==0 ){
           countCh=countCh+x;
        }
        else if(i%3==1){
           countB=countB+x;
        }
        else {
           countBi=countBi+x;
        }
    }
    if(countCh>countB and countCh>countBi){
        cout<<"chest"<<endl;
    }
    else if(countB>countCh and countB>countBi){
        cout<<"biceps"<<endl;
    }
    else if(countBi>countCh and countBi>countB) {
        cout<<"back"<<endl;
    }
    return 0;
}
