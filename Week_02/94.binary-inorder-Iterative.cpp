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
        stack<TreeNode *> stack;
        TreeNode *cur = root;
        while (cur || !stack.empty()) {
            while (cur) {
                stack.push(cur);
                cur = cur->left;
            }

            TreeNode *top = stack.top();
            results.push_back(top->val);
            stack.pop();
            if (top->right)
                cur = top->right;        
        }
        return results;
    }
};
// @lc code=end
