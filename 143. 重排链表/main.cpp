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
    void reorderList(ListNode* head) {
        reorder(head, head->next);
    }
private:
    ListNode* reorder(ListNode* head, ListNode* tail) {
        if (!tail) return head;
        head = reorder(head, tail->next);
        tail->next = head->next;
        head->next = tail;
        return tail->next;
    }
};

int main() {
    Solution().reorderList(new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4)))));
    Solution().reorderList(new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5))))));
}