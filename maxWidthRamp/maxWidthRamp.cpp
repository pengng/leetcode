#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxWidthRamp(const vector<int>& nums) {
		int maxv = 0;

		for (int i = 0; i < nums.size() - 1; i++)
		{
			for (int j = nums.size() - 1; j - i > maxv; j--)
			{
				if (nums[i] <= nums[j])
				{
					maxv = max(maxv, j - i);
					break;
				}
			}
		}

		return maxv;
    }
};

int main() {
	cout << boolalpha;
	cout << (Solution().maxWidthRamp({ 6,0,8,2,1,5 }) == 4) << endl;
	cout << (Solution().maxWidthRamp({ 9,8,1,0,1,9,4,0,4,1 }) == 7) << endl;
	vector<int> large;
	int value;
	char symbol;

	cin >> symbol;
	while (symbol != ']')
	{
		//cout << symbol;
		cin >> value;
		//cout << value;
		large.push_back(value);
		cin >> symbol;
	}

	cout << large.size() << endl;
	cout << Solution().maxWidthRamp(large) << endl;
}