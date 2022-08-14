#include <vector>
#include <cassert>
using namespace std;

/*
// Definition for a Node.
*/
class Node {
public:
    int val;
    vector<Node*> children;

    Node(): val(0) {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
    vector<int> result;
public:
    vector<int> postorder(Node* root) {
        if (!root) return result;
        for (auto node : root->children)
            postorder(node);
        result.push_back(root->val);
        return result;
    }
};

int main() {
    assert(Solution().postorder(new Node(1, {
        new Node(3, {
            new Node(5),
            new Node(6)
        }),
        new Node(2),
        new Node(4)
    })) == (vector<int>{5, 6, 3, 2, 4, 1}));

    assert(Solution().postorder(new Node(1, {
        new Node(2),
        new Node(3, {
            new Node(6),
            new Node(7, {
                new Node(11, {
                    new Node(14)
                })
            })
        }),
        new Node(4, {
            new Node(8, {
                new Node(12)
            })
        }),
        new Node(5, {
            new Node(9, {
                new Node(13)
            }),
            new Node(10)
        })
     })) == (vector<int>{2, 6, 14, 11, 7, 3, 12, 8, 4, 13, 9, 10, 5, 1}));
}