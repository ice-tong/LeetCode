#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty()) {
			return 0;
		}
		int k = nums[0];
		vector<int>::const_iterator i = nums.begin();
		for (vector<int>::iterator i = nums.begin() + 1;i != nums.end();) {
			if (*i == k) {
				i = nums.erase(i);
			}
			else {
				k = *i;
				i++;
			}
		}
		int len = nums.size();
		return len;
	}
};

int main() {
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	int len = Solution().removeDuplicates(nums);
	cout << "nums lenght: "<<nums.size() << endl;
	for (auto num : nums) {
		cout << num<<endl;
	}
	return 0;
}
