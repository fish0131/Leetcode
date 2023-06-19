class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count = 0;
        for(int i = 0; i < t.length(); i++) {
            if(s[count] == t[i]) count++;
        }
        return count == s.length();
    }
};
