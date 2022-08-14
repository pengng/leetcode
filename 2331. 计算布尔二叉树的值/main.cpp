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
    bool evaluateTree(TreeNode* root) {
        if (root->val < 2) return (bool)root->val;
        if (root->val == 2) return evaluateTree(root->left) || evaluateTree(root->right);
        else return evaluateTree(root->left) && evaluateTree(root->right);
    }
};

int main() {
    assert(Solution().evaluateTree(new TreeNode(2, new TreeNode(1), new TreeNode(3, new TreeNode(0), new TreeNode(1)))) == true);
    assert(Solution().evaluateTree(new TreeNode(0)) == false);
}