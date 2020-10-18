class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map <char, string> arr;
        map <string, char> invarr;
        string newstring = "";
        int i = 0;
        
        for (int q=0; q<s.length(); q++) {
            if (s[q] == ' ' ) {
                if (arr.count(pattern[i]) == 0 ) {
                    if (invarr.count(newstring) != 0) return false;
                    arr.insert( pair < char, string > (pattern[i], newstring) );
                    invarr.insert( pair < string, char > ( newstring, pattern[i] ) );
                    newstring = "";
                    i++;
                } 
                else {
                    if (arr[pattern[i]] != newstring) return false;
                    newstring = "";
                    i++;
                }
                
                continue;
                
            }
            newstring += s[q];
            if (q == s.length() - 1) {
                //if (isSolo) return true;
                if (arr.count(pattern[i]) == 0) {
                    if (invarr.count(newstring) != 0) return false;
                    
                    arr.insert( pair < char, string > (pattern[i], newstring) );
                    newstring = "";
                    i++;
                } 
                else {
                    if (arr[pattern[i]] != newstring) return false;
                    newstring = "";
                    i++;
                }
            }
         //   cout<<arr['a'];
        }
        if (pattern.length() == i) 
        return true;
        else return false;
    }
};