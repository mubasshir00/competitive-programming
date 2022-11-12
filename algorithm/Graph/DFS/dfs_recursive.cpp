//count connected graph

#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10];
bool visited[10];

void dfs(int s)
{
    visited[s] = true;
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
    initalize();
    for (int i = 1; i <= nodes; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
            connected++;
        }
    }
    cout << connected << endl;
    return 0;
}
