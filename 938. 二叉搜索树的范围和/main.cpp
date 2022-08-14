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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if (!root) return 0;
        int value = root->val >= low && root->val <= high ? root->val : 0;
        return value + rangeSumBST(root->left, low, high) + rangeSumBST(root->right, low, high);
    }
};

int main() {
    assert(Solution().rangeSumBST(
        new TreeNode(10,
            new TreeNode(5, 
                new TreeNode(3), new TreeNode(7)),
            new TreeNode(15,
                nullptr, new TreeNode(18))),
        7, 15) == 32);
    assert(Solution().rangeSumBST(
        new TreeNode(10,
            new TreeNode(5,
                new TreeNode(3,
                    new TreeNode(1), nullptr),
                new TreeNode(7,
                    new TreeNode(6), nullptr)),
            new TreeNode(15,
                new TreeNode(13),new TreeNode(18))),
        6, 10) == 23);
}