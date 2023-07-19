class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        // unordered_map <int, int> freq(26);
        vector<int> freq(26, 0);
        for(auto c: s) freq[c - 'a']++;
        for(auto c: t) freq[c - 'a']--;
        for(auto m: freq) {
            // if(m.second > 0) count += m.second;
            if(m > 0) count += m;
        }
        return count;
    }

