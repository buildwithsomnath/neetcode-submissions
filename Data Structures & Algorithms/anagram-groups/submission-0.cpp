class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ana_map;
        for(const string& s: strs){
            string key = s;
            sort(key.begin(),key.end());
            ana_map[key].push_back(s);
        }

        vector<vector<string>> res;
        for(auto const& [key,group]:ana_map){
            res.push_back(group);
        }
        return res;
    }
};
