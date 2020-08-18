/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 * 
 * 因为要找组成一样的单词，如何判断？
 * 最简单的，一排序，如果是同一个单词，那么就是组成一样的
 * 比如 “eat” "tea" 排序后都为 “aet”
 * 只要引入一个hash表，索引是排序后的单词，值为结果vector的下标，循环一遍就好了
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int sub = 0;    //结果vector的下标值
        string tmp;     //临时string
        unordered_map<string, int> work; //判断排序后单词是否存在，即字母组成是否一致
        for (auto str:strs) {
            tmp = str;
            sort(tmp.begin(), tmp.end());
            if (work.count(tmp)) {
                res[work[tmp]].push_back(str);
            }
            else {
                vector<string> vec(1, str);
                res.push_back(vec);
                work[tmp] = sub++;
            }
        }
        return res;
    }
};
// @lc code=end
