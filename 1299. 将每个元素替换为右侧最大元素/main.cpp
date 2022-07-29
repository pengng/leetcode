#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
		for (int i = 0; i < arr.size() - 1; i++)
			arr[i] = *max_element(arr.begin() + i + 1, arr.end());

		arr[arr.size() - 1] = -1;

		return arr;
    }
};

int main() {
	vector<int> arr1{ 17,18,5,4,6,1 };
	Solution().replaceElements(arr1);

	vector<int> arr2{ 400 };
	Solution().replaceElements(arr2);
}