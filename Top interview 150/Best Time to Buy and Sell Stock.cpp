class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, minPrice = INT_MAX;
        int n = prices.size();
        for(int i=0; i<n; i++) {
            if(prices[i] < minPrice) minPrice = prices[i];
            if(maxProfit < prices[i] - minPrice) maxProfit = prices[i] - minPrice;
        }
        return maxProfit;
    }
};
