/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 * 
 * 先遍历strs，对每个string进行排序，异位词的排序结果是一样的，
 * 在map中的key值也就一样，然后在map中添加对应的vector，再将vector逐个添加到res中
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map <string, vector<string> > map;
        for (auto &str:strs) {
            string tmp = str;
            sort(tmp.begin(), tmp.end());
            map[tmp].push_back(str);
        }
        for (auto &n : map) 
            res.push_back(n.second);
        return res;
    }
};
// @lc code=end
