class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digits = "123456789";
        vector<int> res;
        int n_low = to_string(low).length();
        int n_high = to_string(high).length();
        for(int i = n_low; i <= n_high; i++){
            for(int j = 0; j < 10-i; j++){
                int num = stoi(digits.substr(j, i));
                if(num >= low && num <= high) res.push_back(num);
            }
        }
        return res;
    }
};
