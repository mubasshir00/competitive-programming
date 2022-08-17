class Solution {
public:
    int xorOperation(int n, int start) {
        int i=0;
  vector<int>v;
  while (n)
  {
    v.push_back(start+(2*i));
    n--;
    i++;
  }
  int x = v[0];
  for(int i=1;i<v.size();i++){
    x = x^v[i];
  }
  return x ;
    }
};
