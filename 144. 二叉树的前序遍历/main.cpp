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
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }

private:
    void preorder(TreeNode* root, vector<int>& result) {
        if (!root) return;
        result.push_back(root->val);
        preorder(root->left, result);
        preorder(root->right, result);
    }
};

int main() {
    assert(Solution().preorderTraversal(new TreeNode(1, nullptr, new TreeNode(2, new TreeNode(3), nullptr))) == (vector<int>{1, 2, 3}));
    assert(Solution().preorderTraversal(nullptr) == (vector<int>{}));
    assert(Solution().preorderTraversal(new TreeNode(1)) == (vector<int>{1}));
    assert(Solution().preorderTraversal(new TreeNode(1, new TreeNode(2), nullptr)) == (vector<int>{1, 2}));
    assert(Solution().preorderTraversal(new TreeNode(1, nullptr, new TreeNode(2))) == (vector<int>{1, 2}));
}