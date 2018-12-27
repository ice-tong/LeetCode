#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void rotate(vector<int>& nums, int k) {
		if (!nums.empty()) {
			int len = nums.size();
			int j = k % len;
			vector<int> tmp_nums = nums;
			for(int i=0;i<len;i++){
				if (i - j < 0) {
					nums[i] = tmp_nums[len - j + i];
				}
				else {
					nums[i] = tmp_nums[i - j];
				}
			}
		}
	}
};
