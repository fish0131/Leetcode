class Solution {
public:
    string reverseParentheses(string s) {
        // Brute Force
        string res;
        vector<int> tmp;
        for(auto c: s) {
            if(c == '(') tmp.push_back(res.length());
            else if(c == ')') {
                int pos = tmp.back(); // get the last elemenet of vector
                tmp.pop_back();
                reverse(res.begin() + pos, res.end());
            }
            else res.push_back(c);
        }
        return res;
    }
};
