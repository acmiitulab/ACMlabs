class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0, r = k;
        double maxsum = 0, sum = 0;
        for (int q=0; q<k; q++) maxsum += nums[q];
        sum = maxsum;
        if (k != nums.size()) {
            for (int q=k-1; q<nums.size(); q++) {

                sum -= nums[l];
                sum += nums[r];
                if (sum>maxsum) maxsum = sum;
                l++; r++;

            }
        }
        return maxsum/k;
    }
};