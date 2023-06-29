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
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n % 2 == 0) return {}; // if the number of node is even, there is no any full binary tree
        if (n == 1) return {new TreeNode(0)};
        vector<TreeNode*> res;
        for(int i = 1; i < n; i++) {
            vector<TreeNode*> left = allPossibleFBT(i), right = allPossibleFBT(n-i-1);
            for (auto a : left) {
        		for (auto b : right) {
        			TreeNode *current = new TreeNode(0);
        			current->left = a;
        			current->right = b;
        			res.push_back(current);
        		}
        	}
        }
        return res;
    }
};
