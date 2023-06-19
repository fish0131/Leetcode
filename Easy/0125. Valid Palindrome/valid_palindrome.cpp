class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        if(s.empty()) return true;
        while (i < j) {
            // isalnum()�ΨӧP�_�@�Ӧr�ŬO�_���Ʀr�Ϊ̦r���A�]�N�O���P�_�@�Ӧr�ŬO�_�ݩ�a~z||A~Z||0~9
            while (i < j && !isalnum(s[i])) ++i;
            while (i < j && !isalnum(s[j])) --j;
            if (tolower(s[i++]) != tolower(s[j--])) 
                return false;
        }
        return true;
    }
};
// javascript solution: https://skyyen999.gitbooks.io/-leetcode-with-javascript/content/questions/125md.htm
