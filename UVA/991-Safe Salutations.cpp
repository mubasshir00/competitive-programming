// C++ program for nth Catalan Number
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[11]={1,1,2,5,14,42,132,429,1430,4862,16796};
		int x;
		int flag =0;
		while(scanf("%d",&x)==1){
                if (flag)
                    puts("");
                flag=1;
		printf("%d\n",arr[x]);
		}
	return 0;
}
