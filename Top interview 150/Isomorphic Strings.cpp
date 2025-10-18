class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, char> mapST;
        unordered_map<char, char> mapTS;

        for(int i=0; i<s.size(); i++) {
            char cs = s[i];
            char ct = t[i];

            if(!mapST.count(cs)) mapST[cs] = ct;
            else {
                if(mapST[cs] != ct) return false;
            }

            if(!mapTS.count(ct)) mapTS[ct] = cs;
            else {
                if(mapTS[ct] != cs) return false;
            }
        }
        return true;
    }
};
