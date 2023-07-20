// This problem is similar to 1347
class Solution {
public:
    int minSteps(string s, string t) {
        int count = 0;
        vector<int> freq(26, 0);
        for(auto c: s) freq[c - 'a']++;
        for(auto c: t) freq[c - 'a']--;
        for(auto m: freq) {
            if(m != 0) count += abs(m);
        }
        return count;
    }
};
