#include<vector>
#include<string>
#include<cassert>
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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        travel(root, "", paths);
        return paths;
    }
private:
    void travel(TreeNode* root, string path, vector<string>& paths) {
        path += to_string(root->val);
        if (!root->left && !root->right) paths.push_back(path);
        else
        {
            path += "->";
            if (root->left) travel(root->left, path, paths);
            if (root->right) travel(root->right, path, paths);
        }
    }
};

int main() {
    assert(Solution().binaryTreePaths(new TreeNode(1, new TreeNode(2, nullptr, new TreeNode(5)), new TreeNode(3))) == (vector<string>{"1->2->5", "1->3"}));
    assert(Solution().binaryTreePaths(new TreeNode(1)) == (vector<string>{"1"}));
}