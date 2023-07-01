class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_ = INT_MIN;
        vector<int> res(arr.size(), -1);
        // from right to left
        for(int i = arr.size()-2; i >= 0; i--) {
            max_ = max(max_, arr[i+1]);
            res[i] = max_;
        }
        return res;
    }
};
