class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        auto compare = [](int lhs, int rhs)
                {
                    return lhs > rhs;
                };

        std::priority_queue<int, std::vector<int>, decltype(compare)> q(compare);
        for (vector<int> i : matrix)
            for(int n : i)
               q.push(n);
        for (int w=1; w<k; w++) {
            q.pop();
            }     
        return q.top();  
    }
};