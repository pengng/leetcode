#include <vector>
#include <cassert>
using namespace std;

class Solution {
public:
    bool checkIfExist(const vector<int>& arr) {
		for (int i = 0; i < arr.size(); i++)
			for (int j = 0; j < arr.size(); j++)
				if (i != j && arr[i] == 2 * arr[j])
					return true;
		return false;
    }
};

int main() {
	assert(Solution().checkIfExist({ 10,2,5,3 }) == true);
	assert(Solution().checkIfExist({ 7,1,14,11 }) == true);
	assert(Solution().checkIfExist({ 3,1,7,11 }) == false);
	assert(Solution().checkIfExist({ -2,0,10,-19,4,6,-8 }) == false);
}