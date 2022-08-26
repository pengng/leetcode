#include<vector>
#include<numeric>
#include<algorithm>
#include<cassert>
using namespace std;

class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, const vector<int>& energy, const vector<int>& experience) {
        auto energys = accumulate(energy.begin(), energy.end(), 0) + 1 - initialEnergy;
        auto it = max_element(experience.begin(), experience.end());
        auto sum = 0;
        for (; it != experience.begin(); i--)
            sum += *it + 1 - ;
        auto experiences = max(*it + 1 - sum - initialExperience, 0);

        return energys + experiences;
    }
};

int main() {
    assert(Solution().minNumberOfHours(5, 3, { 1,4,3,2 }, { 2,6,3,1 }) == 8);
    assert(Solution().minNumberOfHours(2, 4, { 1 }, { 3 }) == 0);
    assert(Solution().minNumberOfHours(1, 1, { 1,1,1,1 }, { 1,1,1,50 }) == 51);
    assert(Solution().minNumberOfHours(30, 78, { 24, 91, 63, 38, 31, 63, 22, 35, 91, 54, 88, 46, 80, 14, 12, 19, 57, 92 }, { 18, 43, 36, 88, 84, 21, 82, 54, 61, 80, 68, 54, 75, 27, 99, 14, 86, 95 }) == 891);
    assert(Solution().minNumberOfHours(94, 70, { 58,47,100,71,47,6,92,82,35,16,50,15,42,5,2,45,22 }, { 77,83,99,76,75,66,58,84,44,98,70,41,48,7,10,61,28 }) == 650);

}