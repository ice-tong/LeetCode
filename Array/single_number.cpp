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