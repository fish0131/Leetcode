class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // 時間複雜度 O(n^2)
        // if(s == "") return 0;
        // int cnt = 0, longest = 0;
        // vector<char> v;
        // for(int i=0; i<s.length(); i++) {
        //     auto it = find(v.begin(), v.end(), s[i]);
        //     if(it == v.end()) {
        //         v.push_back(s[i]);
        //         cnt++;
        //     }
        //     else {
        //         // found duplicate → erase up to the duplicate
        //         v.erase(v.begin(), it + 1);
        //         v.push_back(s[i]);
        //         cnt = v.size();
        //     }
        //     longest = max(longest, cnt);
        // }
        // return longest;

        // 時間複雜度 O(n)
        unordered_map<char, int> mp;
        int longest = 1, left = 0;
        if(s == "") return 0;

        for(int right = 0; right<s.length(); right++) {
            if(mp.count(s[right]) && mp[s[right]] >= left) {
                left = mp[s[right]] + 1;
            }
            mp[s[right]] = right;
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
