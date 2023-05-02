class Solution {
public:
    bool isNumber(string s) {
        bool num = false, numAfterE = true, dot = false, exp = false, sign = false;
        int n = s.size();
        for (int i = 0; i < n; ++i) {
            if (s[i] == ' ') {
                if (i < n - 1 && s[i + 1] != ' ' && (num || dot || exp || sign)) return false;
            } else if (s[i] == '+' || s[i] == '-') {
                if (i > 0 && s[i - 1] != 'e' && s[i - 1] != 'E' && s[i - 1] != ' ') return false;  // if "+" or "-" is not at the first position, judge whether s is a decimal number or not
                sign = true;
            } else if (s[i] >= '0' && s[i] <= '9') {  // judge whether s[i] is a integer or not
                num = true;
                numAfterE = true;
            } else if (s[i] == '.') {
                if (dot || exp) return false;  // reject double "." or double "e" or double "E"  ex: "12.3.4" and "1e-07e" are not valid numbers
                dot = true;
            } else if (s[i] == 'e' || s[i] == 'E') {  
                if (exp || !num) return false;
                exp = true;
                numAfterE = false;
            } else return false;
        }
        return num && numAfterE;
    }
};
