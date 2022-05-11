#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int numberOfWeakCharacters(const vector<vector<int>>& properties) {
		int count = 0;
		vector<int> boss = {INT_MIN, INT_MIN};

		for (int i = 0; i < properties.size(); i++)
		{
			auto item = properties[i];

			if (item[0] < boss[0] && item[1] < boss[1])
			{
				count += 1;
				continue;
			}

			for (int j = 0; j < properties.size(); j++)
			{
				auto other = properties[j];

				if (item[0] < other[0] && item[1] < other[1])
				{
					count += 1;
					boss = other;
					break;
				}
			}
		}

		return count;
    }
};

int main() {
	cout << Solution().numberOfWeakCharacters({ {5, 5}, {6, 3}, {3, 6} }) << endl;
	cout << Solution().numberOfWeakCharacters({ {2, 2}, {3, 3} }) << endl;
}