#include <vector>
#include <unordered_map>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    long long taskSchedulerII(const vector<int>& tasks, int space) {
        unordered_map<int, long long> m;
        long long k = 0LL;
        for (int i = 0; i < tasks.size(); i++)
        {
            if (m.find(tasks[i]) == m.end())
                m[tasks[i]] = ++k;
            else
                k = m[tasks[i]] = max(m[tasks[i]] + space + 1, k + 1);
        }
        return k;
    }
};

int main() {
    assert(Solution().taskSchedulerII({ 1,2,1,2,3,1 }, 3) == 9);
    assert(Solution().taskSchedulerII({ 5,8,8,5 }, 2) == 6);
}