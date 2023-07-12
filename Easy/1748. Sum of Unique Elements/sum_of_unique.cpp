class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count[101] = {0};
        int sum = 0;
        for(auto n: nums) count[n]++;
        for(int i = 1; i < 101; i++) {
            if(count[i] == 1) sum += i;
        }
        return sum;
    }
};
