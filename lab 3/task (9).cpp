class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i = 0, j = 0, answer = 0;
        map <int, int> mymap;
        mymap[0]++;
        for (int q=0; q<nums.size(); q++) {
            i += nums[q];
            if (mymap[i-k] != 0) answer+=mymap[i-k]; 
            mymap[i]++;
        }
        return answer;
    }
};