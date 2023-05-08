class Solution {
public:
   int binarySearchUpperBound(vector<int>v,int target){
	int left = 0;
	int right = v.size()-1;
	int ans =-1;	
	while(left<=right){
	        int mid = left+(right-left)/2;
		if(v[mid]==target){
			ans = mid;
			left =mid+1;
		} else if(v[mid]<target){
			left = mid+1;
		} else {
			right = mid-1;
		}
	}
	return ans ;
}

int binarySearchLowerBound(vector<int>v,int target){
	int left =0;
	int right = v.size()-1;
	int ans =-1;
	while(left<=right){
		int mid = left+(right-left)/2;
		if(v[mid]==target){
			ans = mid;
			right =mid-1;
		} else if(v[mid]<target){
			left = mid+1;
		} else {
			right = mid-1;
		}
	}
	return ans ;
}

    vector<int> searchRange(vector<int>& nums, int target) {
   int first_num=-1;
	 int secn_num=-1;
	
	 secn_num = binarySearchUpperBound(nums,target);
	first_num = binarySearchLowerBound(nums,target);
	return {first_num,secn_num};
    }

};
