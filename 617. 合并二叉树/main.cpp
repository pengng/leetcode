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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (!root1) return root2;
        if (!root2) return root1;
        return new TreeNode(root1->val + root2->val, mergeTrees(root1->left, root2->left), mergeTrees(root1->right, root2->right));
    }
};

int main() {
    Solution().mergeTrees(
        new TreeNode(1, 
            new TreeNode(3,
                new TreeNode(5),
                nullptr
            ), 
            new TreeNode(2)
        ), 
        new TreeNode(2,
            new TreeNode(1,
                nullptr,
                new TreeNode(4)
            ),
            new TreeNode(3,
                nullptr,
                new TreeNode(7)
            )
        )
    );

    Solution().mergeTrees(new TreeNode(1), new TreeNode(1, new TreeNode(2), nullptr));
}