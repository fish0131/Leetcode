class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        for(auto s: stones) {
            if(count(jewels.begin(), jewels.end(), s) != 0) cnt++;
        }
        return cnt;
    }
};
