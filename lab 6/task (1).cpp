class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue <int> my;
        for (int i : nums) {
            my.push(i);
        }
        for (int q=1; q<k; q++) {
            my.pop();
        }
        return my.top();
    }
};