#include<bits/stdc++.h>
using namespace std ;

bool checkYear(int n )
{
    set<int>S;
    S.insert(floor(n/1000));
    while(1){
        S.insert(n%10);
        n=n/10;
        if(n<10){
            break;
        }
    }
    if(S.size()==4){
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    int n ;
    cin>>n;
    while(1){
        n++;
        if(checkYear(n)){
            cout<<n<<endl;
            return 0;
        }
    }
    return 0;
}
