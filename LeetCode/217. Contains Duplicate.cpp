class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       set<int>S;
    for(int i=0;i<nums.size();i++){
        S.insert(nums[i]);
    }
    if(S.size()==nums.size()){
        return false;
    } else {
        return true;
    } 
    }
};
