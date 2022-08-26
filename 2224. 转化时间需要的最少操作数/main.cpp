#include<vector>
#include<string>
#include<cassert>
using namespace std;

class Solution {
public:
    int convertTime(string current, string correct) {
        auto times = 0;
        auto a = stoi(current.substr(0, 2)) * 60 + stoi(current.substr(3, 2));
        auto b = stoi(correct.substr(0, 2)) * 60 + stoi(correct.substr(3, 2));
        auto diff = b - a;
        vector<int> ops{ 60, 15, 5, 1 };
        for (auto op : ops)
        {
            times += diff / op;
            diff %= op;
        }
        return times;
    }
};

int main() {
    assert(Solution().convertTime("02:30", "04:35") == 3);
    assert(Solution().convertTime("11:00", "11:01") == 1);
}