class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int, int> arr1;
        int answ = 0;
        for (int q=0; q<A.size(); q++) {
            for (int w=0; w<A.size(); w++) {
                arr1[(C[q]+D[w])]++;
              
            }
        }
        for (int q=0; q<A.size(); q++) {
            for (int w=0; w<A.size(); w++) {
                if (arr1.count((-1)*(A[q] + B[w])) != 0)  {
                   
                    answ+=arr1[(-1)*(A[q] + B[w])] ;
                    
                }
        	}
        }
        return answ;
    }
};