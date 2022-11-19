//count connected graph

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1000];
bool visited[1000];

void dfs(int s)
{
    if(visited[s]!=true){
        visited[s] = true;
    }
    for (int i = 0; i < adj[s].size(); i++)
    {

        if (visited[adj[s][i]] == false)
        {
            dfs(adj[s][i]);
        }
    }
}
void initalize()
{
    memset(adj, false, 10);
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    int connected = 0;
    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source ;
    cin>>source;
    memset(visited, false, 1000);

    int count_visited =0 ,count_not_visited=0;
    dfs(source);
    for(int i=1;i<=nodes;i++){
        if(visited[i]==1){
          count_visited++;
        } else {
          count_not_visited++;
        }
    }
    cout<<count_not_visited<<endl;

    return 0;
}
