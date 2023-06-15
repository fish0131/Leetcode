class Solution {
public:
    int romanToInt(string s) {
    	// hash map
        unordered_map<char, int> map = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D',500}, {'M',1000}
        };
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || map[s[i]] <= map[s[i-1]]) {
                sum = sum + map[s[i]];
            }
            // if map[s[i]] > map[s[i-1]], minus map[s[i]]*2, because it has been added before, but it should be subtracted
            else sum = sum + map[s[i]] - 2*map[s[i-1]];
        }
        return sum;
    }
};
