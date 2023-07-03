class Solution {
public:
    int minOperations(int n) {
        // if n is a odd, we nned to change all elements to the median
        // if n is a even, we need to change all elements to the average of the two middle element
        int count = 0;
        int m = n / 2;
        if(n % 2 != 0) return m * (m + 1);
        else return m * m; 
    }
};
