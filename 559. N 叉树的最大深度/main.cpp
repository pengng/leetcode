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

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    int maxDepth(Node* root) {
        if (root == nullptr) return 0;
        int maximum = 0;
        for (auto node : root->children)
        {
            int depth = maxDepth(node);
            if (depth > maximum) maximum = depth;
        }
        return maximum + 1;
    }
};

int main() {
    assert(Solution().maxDepth(new Node(1, { new Node(3, {new Node(5), new Node(6)}), new Node(2), new Node(4) })) == 3);
    assert(Solution().maxDepth(
        new Node(1, {
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
        })
    ) == 5);
}