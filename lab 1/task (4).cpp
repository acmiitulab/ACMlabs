class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0, num = nums.size();
        num = ((num + 1) * num) /2;
        for (int q=0; q<nums.size(); q++) sum += nums[q];
        return num - sum;
    }
};