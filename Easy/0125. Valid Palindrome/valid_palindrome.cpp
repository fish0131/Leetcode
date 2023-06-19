class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        if(s.empty()) return true;
        while (i < j) {
            // isalnum()用來判斷一個字符是否為數字或者字母，也就是說判斷一個字符是否屬於a~z||A~Z||0~9
            while (i < j && !isalnum(s[i])) ++i;
            while (i < j && !isalnum(s[j])) --j;
            if (tolower(s[i++]) != tolower(s[j--])) 
                return false;
        }
        return true;
    }
};
// javascript solution: https://skyyen999.gitbooks.io/-leetcode-with-javascript/content/questions/125md.htm
