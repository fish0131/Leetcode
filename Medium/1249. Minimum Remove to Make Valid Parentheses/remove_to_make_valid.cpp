class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string res;
        int left = 0, right = 0;
        // calculate the number of ')'
        for (char c : s) {
            if (c == ')') right++;
        }
        for (char c : s) {
            if (c == '(') {
                // If left and right are equal, which means that there is no extra right parenthesis behind
                // so the '(' is not valid, skip it
                if (left == right) continue;
                left++;
            } 
            else if (c == ')') {
                right--;
                // If left is equal to 0, which means that there is no corresponding left parenthesis in front, so we skip it
                if (left == 0) continue;
                left--;
            }
            // For all cases where there is no continue
            // indicating the corresponding letter, or the left and right parenthesis are legal
            res += c;
        }
        return res;
    }
};
