class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int n = candies.size();
        int max = 0;
        for(int i = 0; i < n; i++) {
            if(candies[i] > max) max = candies[i];
        }
        for(int i = 0; i < n; i++) {
            int sum = candies[i] + extraCandies;
            if(sum >= max) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};
