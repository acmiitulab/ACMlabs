class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> mymap;
        priority_queue <pair <int, int> > answers;
        vector <int> answ;
        vector <int> result;
        int n = k;
        if (nums.size() == 1) {
            
            result.push_back(nums[0]);
            return result;
        } 
        for (int q=0; q<nums.size(); q++) {
            if (mymap[nums[q]] == 0) answ.push_back(nums[q]);
            mymap[nums[q]]++;
        }
        
        for (int q=0; q<answ.size(); q++) {
            answers.push( pair < int, int > (mymap[answ[q]], answ[q] )  );
        }
        
        //sort(answers.begin(), answers.end());
        
        for (int q=0; q<k; q++) {
            result.push_back(answers.top().second);
            answers.pop();
        }
        return result;   
    }
};