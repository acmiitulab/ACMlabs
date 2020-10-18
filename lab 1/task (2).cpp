class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxsum = 0, maxprevsum = 0, maxzero = nums[0]; 
        bool isZero = true;
        for (int q=0; q<nums.size(); q++) {
            if (nums[q] < 0)  {
                if (isZero && nums[q] > maxzero) {
                    maxzero = nums[q];
                }
                if (sum > maxsum) {
                    maxsum = sum;
                }
                if (sum + nums[q] < 0) {
                    sum = 0;
                    continue;
                }
            }
            else { isZero = 0;}
            sum+=nums[q];
            if (q==nums.size()-1 && sum > maxsum) maxsum = sum; 
        }
        if (isZero) return maxzero;
        else return maxsum;
    }
};