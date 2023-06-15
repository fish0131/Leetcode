class Solution {
public:
    bool isPalindrome(int x) {
        int x_ori = x;
        long int x_reverse = 0;
        if (x_ori < 0) return false;
        while(x) {
            x_reverse = x_reverse * 10 + x % 10;
            x /= 10;
        }
        return x_reverse == x_ori;
    }
};
