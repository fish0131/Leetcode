class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int pos = 0;
        while(pos < n-1) {
            // if(bits[pos] == 1) pos += 2;
            // else pos += 1;
            pos += bits[pos] == 0 ? 1 : 2;
        }
        return pos == n-1;
    }
};
