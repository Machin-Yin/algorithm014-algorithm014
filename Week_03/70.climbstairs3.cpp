/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 * 
 * 3、动态归划 时间复杂度O(N) 空间复杂度O(1) 优化空间只存储两个中间变量
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;
        int ret = 0;
        int tmp1 = 1;
        int tmp2 = 2;

        for (int i = 3; i <=n; i++) {
            ret = tmp1 + tmp2;
            tmp1 = tmp2;
            tmp2 = ret;
        }
        return ret;
    }
};
// @lc code=end