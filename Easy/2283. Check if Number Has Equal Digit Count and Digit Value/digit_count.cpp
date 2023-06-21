class Solution {
public:
    bool digitCount(string num) {
        vector<int> count(10);
        for(char c: num) count[c - '0']++; //遇到一個字符，就將這個字符在數組中對應的位置加一
        for(int i = 0; i < num.length(); i++) {
            if(count[i] != num[i] - '0') return false; //判斷'i'是否在num中出現了num[i]次
        }
        return true;
    }
};
