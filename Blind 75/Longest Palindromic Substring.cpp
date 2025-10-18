class Solution {
public:
    int start = 0, cnt = 0;

    void expand(string &s, int left, int right) {
        int n = s.size();
        while(left>=0 && right<n && s[left] == s[right]) {
            cnt++;
            left--;
            right++;
        }
    }

    int countSubstrings(string s) {
        int n = s.size();
        for(int i=0; i<n; i++) {
            expand(s, i, i);
            expand(s, i, i+1);
        }
        return cnt;
    }
};
