class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0], res = 0;
        for(int i = nums.size()-1; i > 0; i--) {
            // ��ڭ̱q�k�������y���ɭԡA�@�}�l�J�쪺�֩w�O�Ʋդ����̤j��
            // ��ڭ̹J��Ĥ@�Ӥp��Ʋդ����̤j�Ȫ��Ʀr�ɡA�ڭ̻ݭn��ʪ��O�Ʋճ̫ᨺ�@�q�Ʀr
            if(nums[i] != nums[i-1]) res += nums.size() - i;
        }
        return res;
    }
};
