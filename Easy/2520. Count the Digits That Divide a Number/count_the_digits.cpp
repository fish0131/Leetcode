class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        for(int i = num; i > 0; i /= 10) {
            if(num % (i % 10) == 0) count++;
        }
        return count;
    }
};
