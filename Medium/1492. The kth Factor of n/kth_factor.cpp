class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> factor;
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                if(i != n / i) {
                    factor.push_back(i);
                    factor.push_back(n / i);
                }
                else factor.push_back(i);
            }
        }
        sort(factor.begin(), factor.end());
        return k > factor.size() ? -1 : factor[k-1];
    }
};
