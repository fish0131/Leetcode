class Solution {
public:
    bool isPowerOfTwo(int n) {
        // To determine whether there is only one "1" in n
        int count = 0;
        while(n > 0) {
            // n & 1 means to check whether n is an odd
            // 1 & n means to check the lowest bit of n, if it is equal to 1, return 1, otherwise return 0
            if(n & 1) count++;
            n = n / 2; //n >>= 1;
        }
        return count == 1;
    }
};
