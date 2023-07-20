class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.empty()) return 0;
        string s_rev = s;
        int n = s.length();
        for (int i = 0; i < n / 2; i++)
            swap(s_rev[i], s_rev[n - i - 1]);
        return s == s_rev ? 1 : 2;
    }
};
