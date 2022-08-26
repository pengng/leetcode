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
    ListNode* middleNode(ListNode* head) {
        auto nodes = 0;
        auto node = head;
        while (node)
        {
            nodes++;
            node = node->next;
        }
        nodes /= 2;
        node = head;
        while (nodes--)
            node = node->next;
        return node;
    }
};

int main() {
    auto middle1 = new ListNode(3, new ListNode(4, new ListNode(5)));
    assert(Solution().middleNode(new ListNode(1, new ListNode(2, middle1))) == middle1);
    
    auto middle2 = new ListNode(4, new ListNode(5, new ListNode(6)));
    assert(Solution().middleNode(new ListNode(1, new ListNode(2, new ListNode(3, middle2)))) == middle2);
}