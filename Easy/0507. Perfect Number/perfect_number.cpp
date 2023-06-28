class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Time Limit Exceeded
        // int sum = 0;
        // for(int i = 1; i < num; i++) {
        //     if(num % i == 0) sum += i;
        // }
        // 在將1視為這樣一個因子的同時，num也會被視為另一個因子。因此，我們需要從sum中減去num，或是將i從2開始。
        if (num <= 1) return false;
        int sum = 1;
        for(int i = 2; i*i < num; i++) {
            if(num % i == 0) {
                sum += i;
                if(i*i != num) sum += num / i;
            }
        }
        return num == sum;
    }
};
