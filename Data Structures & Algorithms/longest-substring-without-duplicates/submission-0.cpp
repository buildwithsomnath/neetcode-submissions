class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> res;
        int left = 0, max_len=0;
        for(int right=0;right<s.length();right++){
            while(res.find(s[right])!=res.end()){
                res.erase(s[left]);
                left++;
            }
            res.insert(s[right]);
            max_len = max(max_len, right-left+1);
        }
        return max_len;
    }
};
