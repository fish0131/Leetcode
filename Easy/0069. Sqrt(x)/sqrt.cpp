class Solution {
public:
    int mySqrt(int x) {
        long left = 0;
        long right = static_cast<long>(x) + 1;
        while (left < right) {
            long mid = left + (right - left) / 2;
            if (mid * mid > x) { 
                right = mid;
            } 
            else {
                left = mid + 1;
            }
        }
    // left: smallest number such that left * left > x
    return left - 1;
    }
};
