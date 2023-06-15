class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        vector<string> res;
        for(int i = 0; i < words.size(); i++) {
            int one = 0, two = 0, three = 0;
            for(char c: words[i]) {
                if(c < 'a') c += 32; //大小寫ASCII差32，小寫比較大
                if(row1.count(c)) one = 1;
                if(row2.count(c)) two = 1;
                if(row3.count(c)) three = 1;
                if(one + two + three > 1) break;
            }
            if(one + two + three == 1) res.push_back(words[i]);
        }
        return res;
    }
};
