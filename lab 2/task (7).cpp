class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        int max, max2, max3;
        sort(A.begin(), A.end());
        for (int q=A.size(); q>=3; q--) {
            max  = A[q - 1];
            max2 = A[q - 2];
            max3 = A[q - 3];
            if (max < max2 + max3) break;
        }
        if (max >= max2 + max3) return 0;
        else return max+max2+max3;
        
        
        
    }
};