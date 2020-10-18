class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int w = 1;
        bool isZero = false; 
        for (int q=0; q<nums.size(); q++) {
            if (!isZero && nums[q] == 0) {
                isZero = true; 
                continue;
            }
            w *= nums[q];
        }
        for (int q=0; q<nums.size(); q++) {
            if (nums[q] == 0) nums[q] = w;
            else if (isZero) nums[q] = 0;
            else nums[q] = w/nums[q];
        }
            
            
        return nums;
    }
};