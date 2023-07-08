class Solution {
public:
    int minimumDeletions(string s) {
        int res = 0, b = 0;
        for (auto c: s) {
            if (c == 'b') b++;
            else res = min(res + 1, b);
        }
        return res;
    }
};
