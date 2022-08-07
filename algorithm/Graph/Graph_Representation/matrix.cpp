#include <bits/stdc++.h>
using namespace std;
int main()
{
    int edges, vertex;
    cin >> vertex >> edges;
    int arr[vertex + 1][vertex + 1];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        arr[u][v] = 1;
        arr[v][u] = 1;
    }
    for (int i = 0; i < vertex; i++)
    {
        for (int j = 0; j < vertex; j++)
        {
            cout << i << " " << j << " = " << arr[i][j] << endl;
        }
    }
    return 0;
}