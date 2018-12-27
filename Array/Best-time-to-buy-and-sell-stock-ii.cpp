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

int main() {
	vector<int> prices;
	prices.push_back(7);
	prices.push_back(1);
	prices.push_back(5);
	prices.push_back(3);
	prices.push_back(6);
	prices.push_back(4);
	int sum = Solution().maxProfit(prices);
	cout << sum << endl;
	return 0;
}
