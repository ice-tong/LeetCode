#include <vector>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		bool ifPlus = false;
		for (vector<int>::reverse_iterator i = digits.rbegin();i!=digits.rend();i++) {
			if (*i == 9) {
				*i = 0;
			}
			else {
				*i += 1;
				ifPlus = true;
				break;
			}
		}
		if (!ifPlus) {
			digits.insert(digits.begin(), 1);
		}
		return digits;
	}
};
