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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int i;
        auto left = head;
        auto daum = new ListNode(-1, head);
        auto flag = false;
        while (true)
        {
            auto right = left;
            auto parent = right;
            for (i = 0; i < k && right; i++) parent = right, right = right->next;
            if (i != k) break;
            daum->next = reverse(left, right);
            daum = parent;
            left = right;
            if (!flag) head = daum->next, flag = true;
        }
        return head;
    }
private:
    ListNode* reverse(ListNode* head, ListNode* tail) {
        for (auto end = tail; head != end;)
        {
            auto next = head->next;
            head->next = tail;
            tail = head;
            head = next;
        }
        return tail;
    }
};

int main() {
    Solution().reverseKGroup(new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5))))), 2);
    Solution().reverseKGroup(new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(4, new ListNode(5))))), 3);
}