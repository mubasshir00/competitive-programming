#include <bits/stdc++.h>
using namespace std;
bool sort_string_vector_base_on_string_size(string &s1, string &s2)
{
    return s1.size() < s2.size();
}
int main()
{
    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), sort_string_vector_base_on_string_size);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}