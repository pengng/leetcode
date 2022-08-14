#include <vector>
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
    vector<int> nodes;
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) return nodes;
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        nodes.push_back(root->val);
        return nodes;
    }
};

int main() {
    assert(Solution().postorderTraversal(new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr))) == (vector<int>{3, 2, 1}));
    assert(Solution().postorderTraversal(nullptr) == (vector<int>{}));
    assert(Solution().postorderTraversal(new TreeNode(1)) == (vector<int>{1}));
}