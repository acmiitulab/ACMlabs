class Solution {
public:
    int getKth(int lo, int hi, int k) {
        int i = 0, n;
        vector< pair<int, int> > my;
        pair<int, int> para;
        for (int q=lo; q<=hi; q++) {
            n=q;
            while (n != 1) {
                if (n%2==0) {
                    n/=2;
                    i++;
                }
                else{
                    n*=3; n++; i++;
                }
            }
            para.first = i;
            para.second = q;
            my.push_back(para);
            i=0;
            
        }
        sort(my.begin(), my.end());
        return(my[k-1].second);
        
    }
};