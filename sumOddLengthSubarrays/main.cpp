#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int sumOddLengthSubarrays(const vector<int>& arr) {
		int total = 0;
		for (int i = 0; i < arr.size(); i++)
		{
			for (int j = 1; j <= arr.size() - i; j += 2)
			{
				int sum = 0;
				for (int k = i; k < i + j; k++)
				{
					sum += arr[k];
				}
				total += sum;
			}
		}
		return total;
    }
};

int main() {
	cout << boolalpha;
	cout << (Solution().sumOddLengthSubarrays({ 1,4,2,5,3 }) == 58) << endl;
	cout << (Solution().sumOddLengthSubarrays({ 1,2 }) == 3) << endl;
	cout << (Solution().sumOddLengthSubarrays({ 10,11,12 }) == 66) << endl;
}