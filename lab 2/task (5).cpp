class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.begin(), piles.end());
        int n =0;
        int i = 0;
        for (int q=piles.size()-2; q>=0; q-=2) {
            n+= piles[q];
            i++;
            if (i >= q) break;
        } 
        return n;
    }
};