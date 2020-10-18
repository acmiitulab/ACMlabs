class Solution {
public:
    
    string largestNumber(vector<int>& nums) {
        
        int n = nums.size(), i = 0;
        string str[100], answer ;
        for (int q=0; q<nums.size(); q++) {
            str[q] = to_string(nums[q]);
        }
            
        sort(str, str+n,  [](const string& a, const string& b){
            
            return a+b > b+a;
            
        
        } );
        for (int q=0; q<n; q++) {
           cout<<str[q]<<" ";
           
            answer+=str[q];
             if (answer == "0") break;
        }
        
        return answer;
        
    }
};