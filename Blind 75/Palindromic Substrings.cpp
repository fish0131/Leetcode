class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict(wordDict.begin(), wordDict.end());
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[0] = true; // base case: empty string

        // split the substring s[0..i-1] into two parts
        // s[0..j-1] (first part)
        // s[j..i-1] (second part)
        // We check if the first part can be segmented (dp[j]) and the second part is a dictionary word.
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && dict.count(s.substr(j, i - j))) {
                    dp[i] = true;
                    break; // no need to check further j
                }
            }
        }
        return dp[n];
    }
};
