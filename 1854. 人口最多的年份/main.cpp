#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumPopulation(const vector<vector<int>>& logs) {
        int maximum = 0;
        int year = 0;

        for (int i = 1950; i <= 2050; i++)
        {
            int count = 0;
            for (const auto item : logs)
            {
                if (item[0] <= i && item[1] > i) count++;
            }
            if (count > maximum)
            {
                maximum = count;
                year = i;
            }
        }

        return year;
    }
};

int main() {
    cout << Solution().maximumPopulation({ {1993,1999}, {2000,2010} }) << endl;
    cout << Solution().maximumPopulation({ {1950,1961}, {1960,1971}, {1970,1981} }) << endl;
}