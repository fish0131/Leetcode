class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = min(word1.length(), word2.length());
        string former;
        for(int i = 0; i < n; i++) {
            former += word1[i];
            former += word2[i];
        }
        return former + word1.substr(n) + word2.substr(n);
    }
};
