class Solution {
public:
    int reverse(int x) {
        long int x_reverse = 0;
        while (x != 0) {
            if (abs(x_reverse) > pow(2, 31)) return 0;
            x_reverse = x_reverse * 10 + x % 10;
            x /= 10;
        }
        // it is > 2^31 - 1 when you try to reverse, it hence it should return 0
        if (abs(x_reverse) > pow(2, 31)) return 0;
        else return x_reverse;
    }
};
