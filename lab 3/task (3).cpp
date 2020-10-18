class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    
        map <int, bool> arr;
        vector <int> answer;
        for (int q=0; q<nums1.size(); q++) {
            if (arr.count(nums1[q]) == 0)
                arr.insert( pair <int, bool> (nums1[q], true));
        }
        for (int q=0; q<nums2.size(); q++) {
            if (arr.count(nums2[q]) != 0) {
                if (arr[nums2[q]] == true) {
                    arr[nums2[q]] = false;
                    answer.push_back(nums2[q]);
                }
            }
        }
        
        return answer;
    }
                        
};