class Solution {
public:
    int climbStairs(int n) {
 vector<unsigned int >v;
 v.push_back(1);
 v.push_back(2);
 unsigned int  x = 45;
 for(unsigned int  i=2;i<=45;i++){
  v.push_back(v[i-1]+v[i-2]);
 }
 return v[n-1];
    }
};
