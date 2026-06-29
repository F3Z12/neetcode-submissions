#include <algorithm>

class Solution {
public:
    bool isAnagram(string& s1, string& s2) {
        vector<int> letters(26, 0);
        for(int i = 0; i < s1.size(); i++) {
            letters[s1[i] - 'a']++;
        }
        for(int j = 0; j < s2.size(); j++) {
            letters[s2[j] - 'a']--;
        }
        for(int k = 0; k < 26; k++) {
            if(letters[k] != 0) {
                return false;
            }
        }
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;

        for(int i = 0; i < strs.size(); i++) {
            string sorted_check = strs[i];
            sort(sorted_check.begin(), sorted_check.end());
            groups[sorted_check].push_back(strs[i]);
        }

        for(auto& x : groups) {
            result.push_back(x.second);
        }
        

        return result;
    }
};
