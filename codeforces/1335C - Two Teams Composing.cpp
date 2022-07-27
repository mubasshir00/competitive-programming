// CPP program to find the most frequent element
// in an array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;
  while (tc--)
  {
    int n;
    cin >> n;
    vector<int> v;
    set<int> S;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      v.push_back(x);
      S.insert(x);
    }

    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
      hash[v[i]]++;

    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash)
    {
      if (max_count < i.second)
      {
        res = i.first;
        max_count = i.second;
      }
    }
    // cout<<hash.size()<<endl;
    // cout<<max_count<<endl;
    if(hash.size()==max_count){
      cout<<hash.size()-1<<endl;
    } else {
      int temp = hash.size();
      cout << min(temp, max_count) << endl;
    }
  }

  return 0;
}
