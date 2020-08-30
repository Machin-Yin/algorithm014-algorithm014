/*
 * @lc app=leetcode.cn id=46 lang=cpp
 *
 * [46] 全排列
 */

// @lc code=start
class Solution {
public:
    vector<vector<int> > result;
    vector<vector<int> > permute(vector<int>& nums) {
        if (nums.size() == 0)
            return {};
        else if (nums.size() == 1)
            return { {nums[0]} };
        else {
            vector<bool> nums1(nums.size(), true);
            vector<int> current;
            func(nums, current, nums1);
            return result;
        }
    }

    void func(vector<int> &nums, vector<int> &current, vector<bool> &nums1) {
        if (current.size() == nums1.size())
            result.push_back(current);
        else {
            for (int i = 0; i < nums.size(); i++) {
                if (nums1[i]) {
                    current.push_back(nums[i]);
                    nums1[i] = false;
                    func(nums, current, nums1);\
                    nums1[i] = true;
                    current.pop_back();
                }
            }
        }
    }
};
// @lc code=end
