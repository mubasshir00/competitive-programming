class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>un_map;
  for (int i = 0; i < nums.size(); i++)
  {
    un_map[nums[i]]++;
  }
  int single = 0;
  vector<int>v;
  for(auto i : un_map){
    if(i.second >1){
      v.push_back(i.first);
    }
  }
  return v;
    }
};
