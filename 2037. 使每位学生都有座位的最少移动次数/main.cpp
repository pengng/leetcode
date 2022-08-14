#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int moves = 0;
        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());
        for (int i = 0; i < seats.size(); i++)
            moves += abs(seats[i] - students[i]);
        return moves;
    }
};

int main() {
    vector<int> seats1{ 3,1,5 };
    vector<int> students1{ 2,7,4 };
    assert(Solution().minMovesToSeat(seats1, students1) == 4);

    vector<int> seats2{ 4,1,5,9 };
    vector<int> students2{ 1,3,2,6 };
    assert(Solution().minMovesToSeat(seats2, students2) == 7);
}