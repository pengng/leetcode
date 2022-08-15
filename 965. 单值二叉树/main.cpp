#include <cassert>

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return (root->left == nullptr || (root->left->val == root->val && isUnivalTree(root->left))) &&
            (root->right == nullptr || (root->right->val == root->val && isUnivalTree(root->right)));
    }
};

int main() {
    assert(Solution().isUnivalTree(
        new TreeNode(1,
            new TreeNode(1,
                new TreeNode(1),
                new TreeNode(1)
            ),
            new TreeNode(1,
                nullptr,
                new TreeNode(1)
            )
        )
    ) == true);
    assert(Solution().isUnivalTree(
        new TreeNode(2,
            new TreeNode(2,
                new TreeNode(5),
                new TreeNode(2)
            ),
            new TreeNode(2)
        )
    ) == false);
}