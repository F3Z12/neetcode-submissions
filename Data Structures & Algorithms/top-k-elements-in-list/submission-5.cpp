#include <algorithm>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> tracker;
        for(int i = 0; i < nums.size(); i++) {
            tracker[nums[i]]++;
        }

        int max = INT_MIN;
        int max_key = nums[0];
    
        while(k != 0) {
            for(auto it = tracker.begin(); it != tracker.end(); it++) {
                if(it->second > max) {
                    max = it->second;
                    max_key = it->first;
                }
            }
            tracker.erase(max_key);
            k--;
            result.push_back(max_key);
            max = INT_MIN;
        }
        return result;
    }
};
