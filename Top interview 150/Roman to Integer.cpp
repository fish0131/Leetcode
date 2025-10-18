class Solution {
public:
    int romanToInt(string s) {
//        unordered_map<char, int> map = {
//            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D',500}, {'M',1000}
//        };
//        int sum = 0;
//        for (int i = 0; i < s.size(); i++) {
//            if (i == 0 || map[s[i]] <= map[s[i-1]]) {
//                sum = sum + map[s[i]];
//            }
//            else sum = sum + map[s[i]] - 2*map[s[i-1]];
//        }
//        return sum;
		unordered_map<char,int> mp = {
            {'I',1}, {'V',5}, {'X',10}, {'L',50}, 
            {'C',100}, {'D',500}, {'M',1000}
        };

        int total = 0;
        int n = s.size();

        for(int i = 0; i < n; i++) {
            if(i < n-1 && mp[s[i]] < mp[s[i+1]]) {
                total -= mp[s[i]]; // 左小右大 → 減
            } else {
                total += mp[s[i]]; // 一般情況 → 加
            }
        }

        return total;
    }
};
