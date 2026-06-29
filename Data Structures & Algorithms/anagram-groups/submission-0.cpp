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
        vector<vector<string>> arr;
        for(int i = 0; i < strs.size(); i++) {
            vector<string> temp;
            for(int j = i + 1; j < strs.size(); j++) {
                if(isAnagram(strs[i], strs[j])) {
                    temp.push_back(strs[j]);
                    strs.erase(strs.begin() + j);
                    j--;
                } 
            }
            temp.push_back(strs[i]);
            arr.push_back(temp);
        }

        return arr;
    }
};
