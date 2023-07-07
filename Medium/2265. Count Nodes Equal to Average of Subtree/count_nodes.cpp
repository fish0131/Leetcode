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

int res = 0;

class Solution {
public:
    int averageOfSubtree(TreeNode* root) {
        res = 0;
        helper(root);
        return res;
    }
private:
    pair<int, int> helper(TreeNode* root) {
        if (root == nullptr) return {0, 0};
        auto [left, left_num] = helper(root->left);
        auto [right, right_num] = helper(root->right);
        int sum = root->val + left + right;
        int count = 1 + left_num + right_num;
        if (sum / count == root->val) res++;
        return {sum, count};
    }
};
