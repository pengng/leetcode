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
    int sumRootToLeaf(TreeNode* root) {
        return sum(root, 0);
    }
private:
    int sum(TreeNode* root, int value) {
        value <<= 1;
        value += root->val;
        if (root->left && root->right) return sum(root->left, value) + sum(root->right, value);
        else if (root->left) return sum(root->left, value);
        else if (root->right) return sum(root->right, value);
        return value;
    }
};

int main() {
    assert(Solution().sumRootToLeaf(
        new TreeNode(1, 
            new TreeNode(0, 
                new TreeNode(0), 
                new TreeNode(1)
            ), 
            new TreeNode(1, 
                new TreeNode(0), 
                new TreeNode(1)
            )
        )
    ) == 22);
    assert(Solution().sumRootToLeaf(new TreeNode(0)) == 0);
}