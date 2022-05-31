#include<bits/stdc++.h>
using namespace std;

struct Pair{
 int start,finish;
};

bool sortBySec(const pair<int,int>&a,const pair<int,int>&b){
 return (a.second<b.second);
}

int activity_selection(vector<pair<int,int>>activies){
   int j =0;
   vector<int>S;

   sort(activies.begin(),activies.end(),sortBySec);

   if(activies.size()>0){
    S.push_back(0);
   }

   for(int i=1;i<activies.size();i++){
	 if(activies[i].first>=activies[j].second){
	  S.push_back(i);
	  j=i;
	 }
   }
   cout<<endl;
   for(int i=0;i<S.size();i++){
    cout<<activies[S[i]].first<<" "<<activies[S[i]].second<<endl;
   }
}

int main()
{
    vector<pair<int,int>>activies;
	int n ;
	cin>>n;
	for(int i=0;i<n;i++){
	 int x ,y;
	 cin>>x>>y;
	 activies.push_back(make_pair(x,y));
	}

	activity_selection(activies);
	return 0;
}


