// read this article  https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/tutorial/

#include<bits/stdc++.h>

using namespace std ;
 vector <int> adj[10000];
    bool visited[100000];

    void dfs(int z) {
        visited[z] = true;
        for(int i = 0;i < adj[z].size();++i)    {
         if(visited[adj[z][i]] == false)
             dfs(adj[z][i]);
        }
    }

    void initialize() {
        for(int i = 0;i < 100000;++i)
         visited[i] = false;
    }

int main()
{
    int tc,n ;
    cin>>tc;
    //cout<<endl;
    while(tc--)
    {
    string ch;
   int connectedComponents=0;
    cin>>ch;
     n = ch[0]-'A';
 memset(visited,0,sizeof(visited));
        for(int i=0;i<=n;i++)   adj[i].clear();
string s ;
cin.ignore();

 for(int i=0;i<n;i++)
  {
      getline(cin,s);
      if(s.empty()){
        break;
      }
        int u,v;
        u=s[0]-'A';
        v=s[1]-'A';
      adj[u].push_back(v);
      adj[v].push_back(u);
  }
  initialize();
   for(int i = 0;i <=n;++i) {
         if(visited[i] == false)     {
             dfs(i);
             connectedComponents++;
         }
        }
cout<<connectedComponents<<endl;
if(tc)
{
    cout<<endl;
}
    }
    return 0 ;
}


