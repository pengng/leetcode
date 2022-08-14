/**
 * Definition for singly-linked list.
 */
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

int main() {
    auto list1 = new ListNode(4, new ListNode(5, new ListNode(1, new ListNode(9))));
    Solution().deleteNode(list1->next);

    auto list2 = new ListNode(4, new ListNode(5, new ListNode(1, new ListNode(9))));
    Solution().deleteNode(list2->next->next);
}