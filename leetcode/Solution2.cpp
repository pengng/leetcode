#include <vector>
#include <iostream>
#include <queue>
#include <map>

using namespace std;

class Solution {
public:
    map<int, bool> m;

    int longestConsecutive(vector<int>& nums) {
        m.clear();

        for (auto item : nums) {
            m[item] = false;
        }

        int max = 0;

        for (auto item : nums) {
            int count = search(item);
            max = count > max ? count : max;
        }

        return max;
    }

    int search(int target) {
        queue<int> q;
        q.push(target);

        int count = 0;

        while (q.size()) {
            int item = q.front();
            q.pop();

            bool isExist = m.find(item) != m.end();
            if (!isExist) continue;

            bool isVisited = m.at(item);
            if (isVisited) continue;

            m[item] = true;
            q.push(item - 1);
            q.push(item + 1);
            count += 1;
        }

        return count;
    }
};

int main() {
    vector<int> arr { 1, 2, 0, 1 };
    vector<int> arr2 { 100,4,200,1,3,2 };
    vector<int> arr3 { 9,1,-3,2,4,8,3,-1,6,-2,-4,7 };
    cout << Solution().longestConsecutive(arr) << endl;
    cout << Solution().longestConsecutive(arr2) << endl;
    cout << Solution().longestConsecutive(arr3) << endl;
}