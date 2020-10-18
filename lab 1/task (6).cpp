class Solution {
public:
    string reverseWords(string s) {
        
        
        string str[1000], result = "", word = "";
        int i = 0;
        for (int q=0; q<s.length(); q++) {
            
            if ( s[q] == ' ' ) {
                if (word != "") {
                    str[i] = word;
                    word = ""; i++; 
                } else continue;
                
    
            }
            else if (s[q] != ' ' && q == s.length() - 1 ) {
                
                word += s[q];
                str[i] = word;
                i++;
                
            }
            else if (s[q] != ' ') word += s[q];
            
            
            
        }
        for (int q = i - 1; q>0; q--) result += str[q] + " ";
        
        result += str[0];
        
        return result;
    }
};