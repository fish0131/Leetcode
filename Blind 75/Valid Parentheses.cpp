class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') stk.push(c);
            else {
                if (stk.empty()) return false; // no matching opening bracket

                char op = stk.top();
                stk.pop();

                if ((c == ')' && op != '(') ||
                    (c == ']' && op != '[') ||
                    (c == '}' && op != '{')) {
                    return false;
                }
            }
        }
        return stk.empty(); // stack should be empty if all matched
    }
};
