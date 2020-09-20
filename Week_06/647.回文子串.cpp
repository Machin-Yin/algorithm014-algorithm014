/*
 * @lc app=leetcode.cn id=647 lang=cpp
 *
 * [647] 回文子串
 */

// @lc code=start
class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size(), ans = 0;
        for (int i = 0; i < n; ++i) {
            int l = i, r = i; //单字母为中心
            while (l >= 0 && r < n && s[l--] == s[r++]) ++ans;
            l = i, r = i + 1; //双字母为中心
            while (l >= 0 && r < n && s[l--] == s[r++]) ++ans;
        }
        return ans;
    }
};

// @lc code=end

