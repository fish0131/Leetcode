class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int min_len = 200; // constraints
        // find the minimum of string length
        for (string str: strs) {
            if (str.size() < min_len) {
                min_len = str.size();
            }
        }
        // compare
        for(int i = 0; i < min_len; i++) {
            for (int j = 0; j < strs.size()-1; j++) {
                if (strs[j][i] != strs[j+1][i]) return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};
