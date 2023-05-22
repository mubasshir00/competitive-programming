class Solution {
public:
    int maxArea(vector<int>& height) {
    int res =0;
	int i=0;
	int j = height.size()-1;
	while(i<j){
		if(height[i]>height[j]){
			res = max(res, height[j]*(j-i));
			//cout<<res<<endl;
			j--;
		} else {
			res = max(res, height[i]*(j-i));
			i++;
		}
	}
	return res;
    }
};
