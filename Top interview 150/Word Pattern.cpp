class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> mapPS;
        unordered_map<string, char> mapSP;

        vector<string> words;
        stringstream ss(s);
        string word;

        // §â¦r¦ê s ©î¦¨³æ¦r
        while (ss >> word) words.push_back(word);

        if(pattern.size() != words.size()) return false;
        
        for(int i=0; i<pattern.size(); i++) {
            char p = pattern[i];
            string w = words[i];

            if(mapPS.count(p) && mapPS[p] != w) return false;
            if(mapSP.count(w) && mapSP[w] != p) return false;

            mapPS[p] = w;
            mapSP[w] = p;
        }
        return true;
    }
};
