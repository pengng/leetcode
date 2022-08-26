#include<vector>
#include<string>
#include<unordered_set>
#include<cassert>
using namespace std;

class Solution {
public:
    int numUniqueEmails(const vector<string>& emails) {
        unordered_set<string> unique;
        for (auto &email : emails)
        {
            string s;
            auto ignore = false;
            auto pass = false;
            for (auto letter : email)
            {
                if (letter == '+') ignore = true;
                else if (letter == '@') pass = true;
                if (pass || !ignore && letter != '.') s += letter;
            }
            unique.insert(s);
        }
        return unique.size();
    }
};

int main() {
    assert(Solution().numUniqueEmails({ "test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com" }) == 2);
    assert(Solution().numUniqueEmails({ "a@leetcode.com","b@leetcode.com","c@leetcode.com" }) == 3);
}