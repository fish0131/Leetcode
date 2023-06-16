class Solution {
public:
    int pivotInteger(int n) {
        // 1 + 2 + ... + x = x + ... + n
        // (1 + x) * x / 2 = (x + n) * (n - x + 1) / 2
        //         x + x^2 = nx - x^2 + x + n^2 - nx + n
        //         2 * x^2 = n^2 + n
        //               x = sqrt((n^2 + n) / 2)
        int value = (n * n + n) / 2;
        int pivot = sqrt(value);
        if(n == 1) return 1;
        else {
            if(pivot == sqrt(value)) return pivot;
            else return -1;
        }
        // solution 2
        // return pivot * pivot == value? pivot : -1;
    }
};
