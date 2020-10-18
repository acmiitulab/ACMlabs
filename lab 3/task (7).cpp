class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map <int, int> mymap;
        for (int q=0; q<nums.size(); q++) {
            if (mymap.count(nums[q]) != 0) {
                if (q - mymap[nums[q]] <= k )  return true;
                else mymap[nums[q]] = q;
            } 
            else 
                mymap.insert(pair<int,int> ( nums[q], q ) ) ;
        }
        return false;
    }
};