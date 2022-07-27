//find repeated element , max repeated
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    unordered_map<int, int> un_map;
    for (int i = 0; i < v.size(); i++)
    {
        un_map[v[i]]++;
    }
    for (auto i : un_map)
    {
        cout << i.first << " " << i.second << endl;
    }
    int max_count = 0;
    int high = 0;
    for (auto i : un_map)
    {
        if (max_count < i.second)
        {
            high = i.first;
            max_count = max(0, i.second);
        }
    }
    cout << high << endl;
    cout << max_count << endl;
    return 0;
}