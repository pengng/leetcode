#include<vector>
#include<numeric>
#include<cassert>
using namespace std;

class Solution {
public:
    int countStudents(const vector<int>& students, const vector<int>& sandwiches) {
        auto ones = accumulate(students.begin(), students.end(), 0);
        auto zeros = students.size() - ones;
        for (auto i = 0; i < sandwiches.size(); i++)
        {
            if (sandwiches[i] && ones > 0) ones--;
            else if (!sandwiches[i] && zeros > 0) zeros--;
            else break;
        }
        return ones + zeros;
    }
};

int main() {
    assert(Solution().countStudents({ 1,1,0,0 }, { 0,1,0,1 }) == 0);
    assert(Solution().countStudents({ 1,1,1,0,0,1 }, { 1,0,0,0,1,1 }) == 3);
}