class Solution {
public:
    double average(vector<int>& salary) {
        double min = salary[0], max = salary[0], sum = salary[0];
        int n = salary.size();
        for (int q=1; q<n; q++) {
            
            if (salary[q] > max ) {  max = salary[q]; }
            if (salary[q] < min ) {  min = salary[q];}
            sum += salary[q];
        }
        return (sum - (max+min)) / (n-2);
    }
};