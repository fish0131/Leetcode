class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> match;
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words.size(); j++) {
                // npos可以表示string的結束位子
                // find()在找不到指定值的情況下會返回string::npos
                if(i != j && words[j].find(words[i]) != string::npos) {
                    match.push_back(words[i]);
                    break;
                }
            }
        }
        return match;
    }
};
