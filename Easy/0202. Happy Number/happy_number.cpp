class Solution {
public:
    bool isHappy(int n) {
        // Tips: for a unhappy number, there must appear 4 in the iterative loop
        while(n != 1 && n != 4) {
            int sum = 0;
            while(n) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};
