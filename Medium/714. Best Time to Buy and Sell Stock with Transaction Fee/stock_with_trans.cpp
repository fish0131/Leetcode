class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sell = 0, buy = -prices[0];
        for(int i = 1; i < prices.size(); i++) {
            // buy(i) = max(buy(i-1), sell(i-1) - price[i]);
            // sell(i) = max(sell(i-1), buy(i-1) + price[i] - fee);
            sell = max(sell, buy + prices[i] - fee);
            buy = max(buy, sell - prices[i]);
        }
        return sell;
    }
};
