class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s == "") return 0;
        int cnt = 0, longest = 0;
        vector<char> v;
        for(int i=0; i<s.length(); i++) {
            auto it = find(v.begin(), v.end(), s[i]);
            if(it == v.end()) {
                v.push_back(s[i]);
                cnt++;
            }
            else {
                // found duplicate ¡÷ erase up to the duplicate
                v.erase(v.begin(), it + 1);
                v.push_back(s[i]);
                cnt = v.size();
            }
            longest = max(longest, cnt);
        }
        return longest;
    }
};
