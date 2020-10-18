class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string> >  arr;
        vector < string > answers, qwe;
        vector < vector <string>> answer;
        string newstring;
        
        for (int q=0; q<strs.size(); q++) {
            int n = strs[q].length();
            newstring = strs[q];
            sort(newstring.begin(), newstring.end());
            if (arr.count(newstring) == 0) {
                arr.insert ( pair<string, vector<string> > (newstring, qwe) );
                arr[newstring].push_back(strs[q]);
                answers.push_back(newstring);
            }
            else {
                arr[newstring].push_back(strs[q]);
            }
                 
        }
        for (int q=0; q<answers.size(); q++) {
            
            answer.push_back(arr[answers[q]]);
            
        }
        return answer;
    }
};