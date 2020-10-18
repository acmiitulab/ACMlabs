class Solution {
public:
    vector<string> topKFrequent(vector<string>& nums, int k) {
         map <string, int> mymap;
        priority_queue <pair <int, string> > answers;
        vector <string> answ;
        vector <string> result;
        int n = k;
        if (nums.size() == 1) {
            result.push_back(nums[0]);
            return result;
        } 
        for (int q=0; q<nums.size(); q++) {
            if (mymap[nums[q]] == 0) answ.push_back(nums[q]);
            mymap[nums[q]]++;
        }
        for (int q=0; q<answ.size(); q++) 
            answers.push( pair < int, string > (mymap[answ[q]], answ[q] )  );
        //sort(answers.begin(), answers.end());
        int r = -1, z = 0 ;
        std::priority_queue<string, std::vector<string>, std::greater<string> > tops;
        while(!answers.empty() && z < k) {
            if (answers.top().first != r) {
                while(!tops.empty() && k > z) {
                    result.push_back(tops.top());
                    tops.pop();
                    z++;
                } 
                r = answers.top().first;
                tops.push(answers.top().second);
            }
            else 
                tops.push(answers.top().second);
            answers.pop();
        }
        for (int q=z; q<k; q++) {
             result.push_back(tops.top());
             tops.pop();
        }
        return result;
    }
};