#include<vector>
#include<queue>
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> averages;
        queue<TreeNode*> nodes{ {root} };
        while (!nodes.empty())
        {
            int n = nodes.size();
            double sum = 0;
            for (auto i = 0; i < n; i++)
            {
                auto node = nodes.front();
                nodes.pop();
                sum += node->val;
                if (node->left) nodes.push(node->left);
                if (node->right) nodes.push(node->right);
            }
            averages.push_back(sum / n);
        }
        return averages;
    }
};

int main() {
    assert(Solution().averageOfLevels(new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)))) == (vector<double>{3.0, 14.5, 11.0}));
    assert(Solution().averageOfLevels(new TreeNode(3, new TreeNode(9, new TreeNode(15), new TreeNode(7)), new TreeNode(20))) == (vector<double>{3.0, 14.5, 11.0}));
}