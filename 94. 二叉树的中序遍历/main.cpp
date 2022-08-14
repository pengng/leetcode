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
    vector<int> result;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) return result;
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
        return result;
    }
};

int main() {
    assert(Solution().inorderTraversal(new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr))) == (vector<int>{1,3,2}));
    assert(Solution().inorderTraversal(nullptr) == (vector<int>{}));
    assert(Solution().inorderTraversal(new TreeNode(1)) == (vector<int>{1}));
}