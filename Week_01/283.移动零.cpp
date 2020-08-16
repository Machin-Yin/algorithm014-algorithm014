/*
 * @lc app=leetcode.cn id=283 lang=cpp
 * [283] 移动零
 * 
 * 思路：双指针，当快指针指向的值不0时，将其所指内容与慢指针所指内容交换，并使慢指针后移一位，指向新的待交换位置。
 */

// @lc code=start
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, j;
        for (i = 0, j = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j++]);
            }
        }
    }
};
// @lc code=end


