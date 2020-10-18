class Solution {
public:
    int myAtoi(string str) {
        bool firstNum = false, isNeg = false;
        string nums = "";
        long long a = 0;
        if (str.length() == 1 && (str[0] >= '0' && str[0] <= '9') )   return (str[0] - '0');
        for (int q=0; q<str.length()-1; q++) {
            
            if (str[q] == '0' && !firstNum) {
                if (q == str.length()-2 ) if (str[q+1] > '0' && str[q+1] <= '9') nums += str[q+1];
                if (!(str[q+1] >= '0' && str[q+1] <= '9')) return 0;
                continue;
            }
            if ( str[q] == ' ' && ((str[q+1] >= '0' && str[q+1] <= '9') || str[q+1] == ' '  || str[q+1] == '+' || str[q+1] == '-' ) && !firstNum) {
                if (q == str.length()-2 ) if (str[q+1] >= '0' && str[q+1] <= '9') nums += str[q+1];
                continue;
            }

            if (str[q] == '-' && (str[q+1] >= '0' && str[q+1] <= '9') && !firstNum ) {
                isNeg = true; 
                if (q == str.length()-2 ) if (str[q+1] >= '0' && str[q+1] <= '9') nums += str[q+1];
                continue; }
            if (str[q] == '+' && (str[q+1] >= '0' && str[q+1] <= '9') && !firstNum ) {
                if (q == str.length()-2 ) if (str[q+1] >= '0' && str[q+1] <= '9') nums += str[q+1];
                continue;
            }
            //cout<<str[q];
            if (str[q] >= '0' && str[q] <= '9') {
                firstNum = true;
                nums += str[q];
                if (q == str.length()-2 ) if (str[q+1] >= '0' && str[q+1] <= '9') nums += str[q+1];
                continue;
            }

           

            break;
            
        }
        
        
        
         int n = nums.length();
         if (nums.length() > 10)  {
             if (!isNeg)  return 2147483647;
             else return -2147483648;

         }

        if (!isNeg)    {
            for (int q=n-1; q>=0; q--)  {
                if (a>2147483647) return 2147483647;
                a += (nums[q] - '0') * pow(10, n - q - 1);
                if (a>2147483647) return 2147483647;

            }
        }
        else {
            for (int q=n-1; q>=0; q--) {

                a -= (nums[q] - '0') * pow(10, n - q - 1);
                 if (a<-2147483648) return -2147483648;

            }
        }
                
        return a;
        
        
        
        
      
    }
};