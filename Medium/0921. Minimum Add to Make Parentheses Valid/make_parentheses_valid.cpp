class Solution {
public:
    int minAddToMakeValid(string s) {
        int pointer = 0, res = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') pointer++;
            else pointer--;
            if(pointer < 0) {
                res++;
                pointer = 0;
            }
        }
        return pointer + res;
    }
};
