class Solution {
public:
    int findMin(vector<int>& nums) {
        vector<int>temps;
        for(int i=0;i<nums.size()-1;i++){
	temps.push_back(nums[i]);
	 if(nums[i]>nums[i+1]){
	 	nums.erase(nums.begin(),nums.begin()+i+1);
	 	nums.insert(nums.end(),temps.begin(),temps.end());
	 	//break;
	 	temps.clear();
	 }
	}
    return nums[0];
    }
};
