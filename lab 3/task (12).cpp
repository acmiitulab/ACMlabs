class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map <int, int> mymap;
        vector <pair <int, int> > answers;
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
        //return answ;
      //  cout<<answ[0];
        for (int q=0; q<answ.size(); q++) {
            answers.push_back( pair < int, int > (mymap[answ[q]], answ[q] )  );
        }
       
        sort(answers.begin(), answers.end());
        
        
        for (int q=answers.size() - 1; q>=0; q--) {
           // cout<<answers[q].second;
            result.push_back(answers[q].second);
            n--;
            if (n == 0) return result;
          //  cout<<result[0];
        }
        
        
        return result;
        
        
    }
};

