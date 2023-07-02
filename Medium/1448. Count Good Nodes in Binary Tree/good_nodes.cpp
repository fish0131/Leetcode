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
    int goodNodes(TreeNode* root, int max_ = INT_MIN) {
        if(root == nullptr) return 0;
        int max_v = max(max_, root->val);
        return (root->val >= max_ ? 1 : 0) + (goodNodes(root->left, max_v)) + (goodNodes(root->right, max_v));
    }
};
