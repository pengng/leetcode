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
    TreeNode* increasingBST(TreeNode* root) {
        if (root->right) root->right = increasingBST(root->right);
        if (root->left == nullptr) return root;
        auto left = increasingBST(root->left);
        auto node = left, parent = node;
        while (node != nullptr)
        {
            parent = node;
            node = node->right;
        }
        parent->right = root;
        root->left = nullptr;
        return left;
    }
};

int main() {
    Solution().increasingBST(
        new TreeNode(5,
            new TreeNode(3,
                new TreeNode(2,
                    new TreeNode(1),
                    nullptr
                ),
                new TreeNode(4)
            ),
            new TreeNode(6,
                nullptr,
                new TreeNode(8,
                    new TreeNode(7),
                    new TreeNode(9)
                )
            )
        )
    );

    Solution().increasingBST(
        new TreeNode(5,
            new TreeNode(1),
            new TreeNode(7)
        )
    );
}