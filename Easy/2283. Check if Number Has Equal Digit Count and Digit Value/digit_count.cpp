class Solution {
public:
    bool digitCount(string num) {
        vector<int> count(10);
        for(char c: num) count[c - '0']++; //�J��@�Ӧr�šA�N�N�o�Ӧr�Ŧb�Ʋդ���������m�[�@
        for(int i = 0; i < num.length(); i++) {
            if(count[i] != num[i] - '0') return false; //�P�_'i'�O�_�bnum���X�{�Fnum[i]��
        }
        return true;
    }
};
