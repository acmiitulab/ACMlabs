class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        map <int, int> arr;
        map <int, map<int, int> > arr2;
        vector< vector<int> > answ;
        vector<int> one;
        for (int q=0; q<nums.size(); q++) {
            arr[nums[q]]++;
        }
        int i, j, k;
        for (int q=0; q<nums.size(); q++) {
            for (int w=q+1; w<nums.size(); w++) {
                i = nums[q]; j = nums[w]; k = 0 - i - j;
                arr[i]--; arr[j]--;
                if (arr[k] != 0 && arr2[i][j] == 0 && arr2[j][k] == 0 && arr2[i][k] == 0 ) {
                    
                    one.push_back(i);
                    one.push_back(j);
                    one.push_back(k);
                    answ.push_back(one);
                    one.clear();
                    
                    arr2[i][j]++;
                    arr2[i][k]++;
                    arr2[j][i]++;
                    arr2[j][k]++;
                    arr2[k][j]++;
                    arr2[k][i]++;
                    
                    
                    
                }
                arr[i]++; arr[j]++;
                
            }
        }
        return answ;
    }
};