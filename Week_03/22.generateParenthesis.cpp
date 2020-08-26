/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 * 
 * 剪枝：
 * 1.括号组合中左括号的数量等于右括号的数量
 * 2.括号组合中任何位置左括号的数量都是大于等于右括号的数量
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ret;
        int left = 0, right = 0;
        generate(ret, left, right, n, "");
        return ret;
    }

    void generate(vector<string>& ret, int left, int right, int n, string str) {
        if (left == n && right == n) {
            ret.push_back(str);
            return;
        }

        if (left < n)
            generate(ret, left + 1, right, n, str + "(");
        if (left > right)
            generate(ret, left, right + 1, n, str + ")");
    }
};
// @lc code=end
