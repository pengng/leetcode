#include <vector>
#include <string>
#include <stack>
#include <cstdlib>
#include <cassert>
using namespace std;

class Solution {
public:
    int calPoints(const vector<string>& ops) {
        stack<int> points;
        for (auto& op : ops)
            if (op == "C") points.pop();
            else if (op == "D") points.push(points.top() * 2);
            else if (op == "+")
            {
                auto tmp = points.top();
                points.pop();
                auto curr = points.top() + tmp;
                points.push(tmp);
                points.push(curr);
            }
            else points.push(atoi(op.c_str()));
        auto sum = 0;
        while (!points.empty())
        {
            sum += points.top();
            points.pop();
        }
        return sum;
    }
};

int main() {
    assert(Solution().calPoints({ "5","2","C","D","+" }) == 30);
    assert(Solution().calPoints({ "5","-2","4","C","D","9","+","+" }) == 27);
    assert(Solution().calPoints({ "1" }) == 1);
}