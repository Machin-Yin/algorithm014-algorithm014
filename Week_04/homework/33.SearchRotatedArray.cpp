/*
 * @lc app=leetcode.cn id=33 lang=cpp
 *
 * [33] 搜索旋转排序数组
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low <= high) {
            int mid = (low + high) >> 1;
            if (target == nums[mid])
                return mid;
            if (nums[low] <= nums[mid]) {
                if (target >= nums[low] && target < nums[mid])
                    high = mid -1;
                else 
                    low = mid + 1;
            }
            else {
                if(target > nums[mid] && target <= nums[high])
                    low = mid + 1;
                else 
                    high = mid - 1;
            }
        }
        return -1;
    }
};
// @lc code=end

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if ((nums[0] > target) ^ (nums[0] > nums[mid]) ^ (target > nums[mid]))
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo == hi && nums[lo] == target ? lo : -1;
    }
};
*/
