class Solution {
public:
    int minSwaps(string s) {
        int count = 0; // the number of unpaired string
        for(auto c: s) {
            if(c == '[') count++;
            else if(count > 0) count--; // c == ']'
        }
        return (count + 1) / 2;
    }
};
