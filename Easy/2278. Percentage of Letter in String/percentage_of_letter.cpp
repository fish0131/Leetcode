class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for(char c: s) {
            if(c == letter) count++;
        }
        return 100 * count / s.length();
        // solution 2
        // return 100 * count(s.begin(), s.end(), letter) / s.length();
    }
};
