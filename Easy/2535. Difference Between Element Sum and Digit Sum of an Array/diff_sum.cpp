class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sumE = 0, sumD = 0;
        vector<int> digits;
        for(auto n: nums) {
            sumE += n;
            while(n) {
                digits.push_back(n % 10);
                n /= 10;
            }
        }
        for(auto d: digits) sumD += d;
        return abs(sumE - sumD);
    }
};
