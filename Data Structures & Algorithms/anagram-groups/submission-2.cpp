class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> res;
        for(int i{0};i< strs.size();i++){
            string key;
            key.reserve(52);
            int count[26] = {0};
            for(int j{0};j<strs[i].size();j++){
                count[strs[i][j]-'a']++;
            }
            for (int k = 0; k < 26; k++) {
                key += to_string(count[k]) + "#";
            }
            groups[key].push_back(strs[i]);
        }

        for(auto& pair : groups){
            res.push_back(pair.second);
        }

        return res;
    }
};
