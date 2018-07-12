#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	int singleNumber(vector<int>& nums) {
		int tmp = 0;
		for (auto num : nums) {
			tmp = tmp ^ num;
		}
		return tmp;
	}
};
int main() {
	vector<int> nums;
	nums.push_back(4);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(2);
	cout << Solution().singleNumber(nums) << endl;
	return 0;
}