#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	int maxProfit(vector<int>& prices) {
		if (prices.empty()) {
			return 0;
		}
		int sum = 0;
		int tmp_sum = 0;
		for (vector<int>::iterator i=prices.begin()+1;i != prices.end();i++) {
			if (*(i - 1) < *(i)) {
				int tmp = *(i) - *(i - 1);
				tmp_sum += tmp;
			}
			else {
				sum += tmp_sum;
				tmp_sum = 0;
			}
		}
		sum += tmp_sum;
		return sum;
	}
};