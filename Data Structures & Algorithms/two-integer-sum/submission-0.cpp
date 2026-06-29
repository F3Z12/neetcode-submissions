class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ind1;
        int ind2;
        vector<int> arr;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[j] + nums[i] == target) {
                    ind1 = i;
                    ind2 = j;
                }
            }
        }
        arr.push_back(ind1);
        arr.push_back(ind2);
        return arr;
    }
};
