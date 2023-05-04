class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int digits = 0;
        for(int i = 0; i < nums.size(); i++) {
            digits = digits ^ nums[i];  //  "^" operator can perform a bitwise XOR operation between two integers
        }
        return digits;
    }
};
