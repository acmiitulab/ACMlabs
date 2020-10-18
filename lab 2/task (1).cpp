class Solution {
public:
    string sortString(string s) {
        int b = s.length(), i = 0; bool reverseChek = false;
        string answer = "";
        sort(s.begin(), s.end());

        //anwer += s[0]; s.erase(0, 1);
        while (s != "") {
            if (!reverseChek) {
                if (i == s.length()-1) {
                    reverseChek = true;
                    answer += s[i]; s.erase(i, 1); i--;
                    continue; }
                if (s[i]<s[i+1]){
                    answer += s[i];
                   // cout<<s[i];
                    s.erase(i, 1);
                }
                else i++;
            }
            else {
                if (i == 0) {
                    reverseChek = false;
                    answer += s[0]; s.erase(0, 1);
                    continue; }
                if (s[i]>s[i-1]){
                    //cout<<s[i];
                    answer += s[i];

                    s.erase(i, 1); i--;
                }
                else i--;
                //cout<<i;

            }

        }
        return answer;
        
    }
};