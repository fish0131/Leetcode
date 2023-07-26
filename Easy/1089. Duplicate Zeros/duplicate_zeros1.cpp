class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // using additional memory
         int n = arr.size();
         vector<int> res;
         for (int i = 0; i < n && res.size() < n; i++) {
             res.push_back(arr[i]);
             if (arr[i] == 0 && res.size() < n) res.push_back(0);
         }
         arr = res;
    }
};
