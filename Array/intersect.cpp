#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		vector<int> nums;
		if (nums1.empty()||nums2.empty()) {
			return nums;
		}
		for (vector<int>::iterator i = nums1.begin();i!=nums1.end();) {
			bool flag = false;
			for (vector<int>::iterator j = nums2.begin();j != nums2.end();j++) {
				if (*i == *j) {
					j = nums2.erase(j);
					flag = true;
					break;
				}
				else {
					flag = false;
				}
			}
			if (flag) {
				nums.push_back(*i);
				i = nums1.erase(i);
			}
			else {
				i++;
			}
		}
		return nums;
	}
};

