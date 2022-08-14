#include <vector>
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
    TreeNode* sortedArrayToBST(const vector<int>& nums) {
        return build(nums, 0, nums.size());
    }
private:
    TreeNode* build(const vector<int>& nums, int low, int high) {
        if (low >= high) return nullptr;
        auto mid = (low + high) / 2;
        auto root = new TreeNode(nums[mid]);
        root->left = build(nums, low, mid);
        root->right = build(nums, mid + 1, high);
        return root;
    }
};

int main() {
    Solution().sortedArrayToBST({ -10,-3,0,5,9 });
    Solution().sortedArrayToBST({ 1,3 });
}