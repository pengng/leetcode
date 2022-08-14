#include <queue>
#include <unordered_set>
#include <cassert>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int numColor(TreeNode* root) {
        queue<TreeNode*> q({ root });
        unordered_set<int> types;
        while (q.size())
        {
            auto node = q.front();
            types.insert(node->val);
            q.pop();
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        return types.size();
    }
};

int main() {
    assert(Solution().numColor(new TreeNode(1, new TreeNode(3, new TreeNode(1), nullptr), new TreeNode(2, new TreeNode(2), nullptr))) == 3);
    assert(Solution().numColor(new TreeNode(3, new TreeNode(3), new TreeNode(3))) == 1);
}