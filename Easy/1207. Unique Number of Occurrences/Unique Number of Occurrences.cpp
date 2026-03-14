class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int a: arr) mp[a]++;

        unordered_set<int> seen;

        for(auto p: mp) {
            if(seen.count(p.second)) return false;
            seen.insert(p.second);
        }
        return true;
    }
};
