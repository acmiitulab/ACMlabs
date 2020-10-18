class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector< pair<int, int> > answer;
        vector<vector<int>> answ;
        int n;
        for (int q = 0; q<points.size(); q++) {
            //cout<<points[q][0]<<" "<<  sqrt(points[q][1])<<endl;
            n = ((points[q][0])*(points[q][0])) + (points[q][1]*points[q][1]);
            answer.push_back(make_pair(n, q));
            //cout<<answer[q].first<<" ";
            
        }
        sort(answer.begin(), answer.end());
        for (int q=0; q<K; q++) {
            answ.push_back(points[(answer[q].second)]);
            
        }
        return answ;
        
        
        
    }
};