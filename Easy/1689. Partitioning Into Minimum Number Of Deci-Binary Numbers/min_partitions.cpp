class Solution {
public:
    int minPartitions(string n) {
        int maxValue = 0;
        for(auto c: n) {
            if((c - '0') > maxValue) maxValue = c - '0';
        }
        return maxValue;
    }
};
