#include<bits/stdc++.h>
using namespace std ;

bool check(int s){
	set<int>S;
	while(s!=0){
		S.insert(s%10);
		s=s/10;
	}
	if(S.size()==4){
		return true;
	}
	else return false ;
}

int main()
{
    int n;
    cin>>n;
    n++;
    while(1){
    if(!check(n)){
    	n++;
	}
	else {
		cout<<n<<endl;
		break;
	}
}
	return 0;
}
