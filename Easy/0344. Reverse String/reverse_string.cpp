class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0 , right = ( int )s.size() - 1 ;
        // from right and left go forward/backward to center
         while (left < right) {
            char t = s[left];
            s[left ++] = s[right];
            s[right --] = t;
        }
    }
};
