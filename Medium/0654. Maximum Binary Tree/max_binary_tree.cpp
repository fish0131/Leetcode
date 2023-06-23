/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.empty()) return nullptr;
        // auto maximum = std::max_element(nums.begin(), nums.end());
        int maximum = INT_MIN, max_idx = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > maximum) {
                maximum = nums[i];
                max_idx = i;
            }
        }
        // TreeNode* root = new TreeNode(*maximum);
        TreeNode* root = new TreeNode(maximum);
        vector<int> left = vector<int>(nums.begin(), nums.begin() + max_idx);
        vector<int> right = vector<int>(nums.begin() + max_idx + 1, nums.end());
        root -> left = constructMaximumBinaryTree(left);
        root -> right = constructMaximumBinaryTree(right);
        return root;
    }
};
