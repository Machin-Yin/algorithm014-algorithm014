/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 * 
 * 遍历s、t,遇s中字符map中该字符+1，遇t中字符map中该字符计数-1, 最后某一字符不为0则false
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> umap;
        for (int i = 0; i < s.size(); ++i) {
            ++umap[s[i]];
            --umap[s[i]];
        }
        for (auto c : umap) {
            if (c.second != 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end


