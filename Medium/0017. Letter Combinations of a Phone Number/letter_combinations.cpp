class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> res{""};
        vector<string> dict{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        for (int i = 0; i < digits.size(); ++i) {
            vector<string> t;
            string str = dict[digits[i] - '0']; // digits[i] - '0': turn str into integer
            for (int j = 0; j < str.size(); j++) {
                // browse each str in the res and add characters to the back, 
                // then push them to a terminal vactor t
                for (string s : res) t.push_back(s + str[j]); 
            }
            res = t;
        }
        return res;
    }
};
