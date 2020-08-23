/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> results;
    vector<int> inorderTraversal(TreeNode* root) {
        traverse(root);
        return results;
    }

    void traverse(TreeNode *node) {
        if (node == NULL)
            return;
        traverse(node->left);
        results.push_back(node->val);
        traverse(node->right);
    }
};
// @lc code=end