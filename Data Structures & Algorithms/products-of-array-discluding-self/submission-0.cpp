class Solution {
public:

    int productCaclulator(vector<int> &nums, int x){
        int product = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(i == x) {
                product = product;
            } else {
                product = product * nums[i];
            }
        }
        return product;
    }

    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            result[i] = productCaclulator(nums, i);
        }
        return result;
    }
};
