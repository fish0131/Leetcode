class Solution {
public:
    bool checkPerfectNumber(int num) {
        // Time Limit Exceeded
        // int sum = 0;
        // for(int i = 1; i < num; i++) {
        //     if(num % i == 0) sum += i;
        // }
        // �b�N1�����o�ˤ@�Ӧ]�l���P�ɡAnum�]�|�Q�����t�@�Ӧ]�l�C�]���A�ڭ̻ݭn�qsum����hnum�A�άO�Ni�q2�}�l�C
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
