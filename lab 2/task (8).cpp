class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> answer;
        int i = 0, j = 0;
        bool isNull = false;
        while ( true ) {
            cout<<i<<" "<<j;
            if ( i >= nums1.size() || j >= nums2.size() ) break;
            if (nums1[i] == nums2[j] ) {
                if (!isNull) answer.push_back(nums1[i]); 
                else if (nums1[i] != answer.back()) answer.push_back(nums1[i]);
                i++; j++; isNull = true;
            }
            else if (nums1[i] > nums2[j]) j++;
            else if (nums2[j] > nums1[i]) i++;
            
        }
        return answer;
    }
};