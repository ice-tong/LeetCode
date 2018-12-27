#include <vector>
using namespace std;

class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int zeroNum = 0;
		for (vector<int>::iterator i = nums.begin();i != nums.end();) {
			if (*i == 0) {
				i = nums.erase(i);
				zeroNum++;
			}
			else {
				i++;
			}
		}
		for (int n = 0;n != zeroNum;n++) {
			nums.insert(nums.end(), 0);
		}
	}
};