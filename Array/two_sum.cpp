#include <vector>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		// 36.85 beat
		for (int i = 0;i != nums.size();i++) {
			for (int j = 0;j != nums.size();j++) {
				if (i != j && nums[i] + nums[j] == target) {
					vector<int> mynums = { i, j };
					return mynums;
				}
			}
		}
	}
};