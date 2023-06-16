class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int idx1 = 0;
        int idx2 = numbers.size()-1;
        while(idx1 < idx2) {
            int sum = numbers[idx1] + numbers[idx2];
            if(sum == target) break;
            if(sum > target) idx2--;
            if(sum < target) idx1++;
        }
        return {idx1+1, idx2+1};
    }
};
