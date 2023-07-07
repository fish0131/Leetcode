class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0, sign = 1;
        vector<int> nums;
        while (n) {
            sum += sign * (n % 10);
            n /= 10;
            sign *= -1;
        }
        return -sign * sum;
    }
};
