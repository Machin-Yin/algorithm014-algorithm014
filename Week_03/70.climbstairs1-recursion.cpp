/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 * 
 * 1、暴力递归 时间复杂度O(2^N) 空间复杂度O(N) 超出时间限制 42开始超时  记录方法
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }
        return climbStairs(n -1) + climbStairs(n - 2);
    }
};
// @lc code=end