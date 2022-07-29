#include <cassert>
using namespace std;

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
    bool checkTree(TreeNode* root) {
        return root->val == root->left->val + root->right->val;
    }
};

int main() {
    assert(Solution().checkTree(new TreeNode(10, new TreeNode(4), new TreeNode(6))) == true);
    assert(Solution().checkTree(new TreeNode(5, new TreeNode(3), new TreeNode(1))) == false);
}