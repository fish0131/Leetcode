class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> res;
        for(int num = left; num <= right; num++) {
            int temp = num;
            while(temp / 10 != 0) {
                if(temp % 10 != 0 && num % (temp % 10) == 0) {
                    temp /= 10;
                    continue;
                }
                else break;
            }
            if(temp / 10 == 0 && num % temp == 0) res.push_back(num);
        }
        return res;
    }
};
