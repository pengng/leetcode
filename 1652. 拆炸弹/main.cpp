#include <vector>
#include <cstdlib>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
		int n = code.size();
		vector<int> result(n);
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			int j = (i + k + n) % n;
			while (j != i) {
				result[i] += code[j];
				j += k > 0 ? -1 : 1;
				j = (j + n) % n;
			}
		}

		return result;
    }
};

int main() {
	vector<int> arr1{ 5,7,1,4 };
	Solution().decrypt(arr1, 3);

	vector<int> arr2{ 1,2,3,4 };
	Solution().decrypt(arr2, 0);

	vector<int> arr3{ 2,4,9,3 };
	Solution().decrypt(arr3, -2);
}