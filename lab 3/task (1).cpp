class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, bool> arr;
        for (int q=0; q<nums.size(); q++) {
            if(arr.count(nums[q])) return true;
            arr.insert( pair<int, bool> (nums[q], true) );
            
          }
        return false;
    }
};