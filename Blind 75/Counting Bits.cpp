class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            // i >> 1 : 去掉最後一位（除以 2）
            // (i & 1) : 最後一位是否為 1（是的話加 1）
            bits[i] = bits[i >> 1] + (i & 1);
        }
        return bits;
    }
};
