class Solution {
public:
    bool isHappy(int n) {
        map <int, int> mymap;
        if (n == 1) return true;
        mymap[n]++;
        int sum = 0;
        while (true) {
            while (n != 0) {
                sum += (n%10)*(n%10);
                n/=10;
            }
            if (mymap[sum] != 0) return false;
            cout<<sum<<" ";
            mymap[sum]++;
            n = sum;
            sum = 0;
            if (n == 1) return true;
        }
    }
};