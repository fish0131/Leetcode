class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> match;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.size(); j++) {
                // npos�i�H���string��������l
                // find()�b�䤣����w�Ȫ����p�U�|��^string::npos
                if(i != j && words[j].find(words[i]) != string::npos) {
                    match.push_back(words[i]);
                    break;
                }
            }
        }
        return match;
    }
};
