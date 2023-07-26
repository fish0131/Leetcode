class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        // without using additional memory
        int n = arr.size();
        for (int i = n - 1, j = n + count(arr.begin(), arr.end(), 0) - 1; i < j; i--, j--) {
            if (j < n) arr[j] = arr[i];
            if (arr[i] == 0 && --j < n) arr[j] = 0;
        }
    }
};



