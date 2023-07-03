class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()) return false;
        // Hashset can remove duplicates, if a string has duplicates, the final size of hashset must be smaller than original size
        if (s == goal && unordered_set<char>(s.begin(), s.end()).size() < s.size()) return true;
        // if s.size() == goal.size() and s != goal, we can record all different position of the corresponding char and push them to a vactor.
        // Then, we decide whether the size of the vector is equal to 2, and judge whether the char in the corresponding position in B is the same after the exchange position.
        vector<int> diff;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != goal[i]) diff.push_back(i);
        }
        return (diff.size() == 2) && (s[diff[0]] == goal[diff[1]]) && (s[diff[1]] == goal[diff[0]]);
    }
};
