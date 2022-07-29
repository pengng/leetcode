#include <cassert>
using namespace std;

/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int value;
        for (value = 0; head; head = head->next)
            value = (value << 1) + head->val;

        return value;
    }
};

int main() {
    assert(Solution().getDecimalValue(new ListNode(1, new ListNode(0, new ListNode(1)))) == 5);
    assert(Solution().getDecimalValue(new ListNode(0)) == 0);
    assert(Solution().getDecimalValue(new ListNode(1)) == 1);
    assert(Solution().getDecimalValue(new ListNode(1, new ListNode(0, new ListNode(0, new ListNode(1, new ListNode(0, new ListNode(0,
        new ListNode(1, new ListNode(1, new ListNode(1, new ListNode(0, new ListNode(0, new ListNode(0, new ListNode(0, new ListNode(0,
        new ListNode(0)))))))))))))))) == 18880);
    assert(Solution().getDecimalValue(new ListNode(0, new ListNode(0))) == 0);
}