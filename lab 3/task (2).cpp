class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> arr;
        vector<int> answer;
        for (int q=0; q<nums.size(); q++) {
            if (arr.count(target-nums[q]))  {
                answer.push_back(arr[target-nums[q]]);
                //cout<<arr[2];
                answer.push_back(q);
            }
            arr.insert( pair<int, int> (nums[q], q) );
            
        }
        return answer;
    }
};