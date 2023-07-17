class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> count;
        for(auto& num: arr){
            count[num]++;
        }
        vector<int> freq;
        for (auto& [_, c] : count) {
            freq.push_back(c);
        }
        sort(freq.begin(), freq.end());
        for (int i = 0, m = freq.size(); i < m; i++) {
            k -= freq[i];
            if (k < 0) {
                return m - i;
            }
        }
        return 0;
    }
};
