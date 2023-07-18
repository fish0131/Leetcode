class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0;
        for(auto n: nums) {
            if(n > 0) pos++;
            else if(n < 0) neg++;
        }
        return max(neg, pos);
    }
};
