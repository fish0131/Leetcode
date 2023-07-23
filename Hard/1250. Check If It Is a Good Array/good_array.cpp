class Solution {
public:
    int gcd(int a, int b) {
        return b ? gcd(b, a % b) : a;
    }
    bool isGoodArray(vector<int>& nums) {
        int res = nums[0];
        for(auto num: nums) {
            res = gcd(res, num);
            if(res == 1) return true;
        }
        return false;
    }
};
