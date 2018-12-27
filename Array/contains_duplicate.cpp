#include<vector>
#include<map>
#include<iostream>
using namespace std;

class Solution {
public:
	bool containsDuplicate(vector<int>& nums) {
		if (nums.empty()) {
			return false;
		}
		map<int, int> mymap;
		for (auto num : nums) {
			if (!mymap.count(num)) {
				mymap[num] = num;
			}
			else {
				return true;
			}
		}
		return false;
	}
};