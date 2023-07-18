class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int current = 1;
        vector<string> res;
        for (int n: target) {
            while (current != n) {
                res.push_back("Push");
                res.push_back("Pop");
                current++;
            }
            res.push_back("Push");
            current++;
        }
        return res;
    }
};
