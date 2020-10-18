class Solution {
public:
    map<int, vector<int>> mymap;
    
    Solution(vector<int>& nums) {
        vector<int> arr;
        for (int q=0; q<nums.size(); q++) {
           if ( mymap.count(nums[q]) == 0 ) {
               arr.push_back(q);
               mymap.insert( pair <int, vector<int>> (nums[q], arr));
               arr.clear();
           }
            else {
                mymap[nums[q]].push_back(q);
            }
                        
        }
    }
    
    int pick(int target) {
        int n = mymap[target].size();
        return mymap[target][ 0 + (rand() % static_cast<int>(n - 0)) ];
        //return 0;
        
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */