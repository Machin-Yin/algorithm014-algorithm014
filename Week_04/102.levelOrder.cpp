/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > ret;
        if (!root)
            return ret;
        queue<TreeNode *> que;
        que.push(root);
        while(!que.empty()) {
            int size = que.size();
            vector<int> curLevel;
            for (int i = 0; i < size; i++) {
                TreeNode *node = que.front();
                que.pop();
                curLevel.push_back(node->val);
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
            ret.push_back(curLevel);
        }
        return ret;
    }
};
// @lc code=end
