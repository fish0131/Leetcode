class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        int min = INT_MAX;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size()-1; i++) {
            int diff = abs(arr[i] - arr[i+1]);
            if(diff < min) {
                min = diff;
                res.clear();
            }
            if(diff == min) res.push_back({arr[i], arr[i+1]});
        }
        return res;
    }
};
