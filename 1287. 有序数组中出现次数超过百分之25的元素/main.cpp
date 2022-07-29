#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    int findSpecialInteger(const vector<int>& arr) {
		int count = 1;
		for (int i = 1; i < arr.size(); i++)
		{
			if (arr[i] == arr[i - 1])
				count++;
			else
				count = 1;

			if (count > arr.size() / 4.0) return arr[i];
		}

		return arr.front();
    }
};

int main() {
	assert(Solution().findSpecialInteger({ 1,2,2,6,6,6,6,7,10 }) == 6);
}