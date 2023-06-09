class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // // binary tree
        // int l = 0;
        // int r = letters.size(); // using l and r to narrow our search by half every time
        // while (l < r) {
        //     const int m = l + (r - l) / 2;
        //     if (letters[m] <= target)
        //         l = m + 1;
        //     else
        //         r = m;
        // }
        // return letters[l % letters.size()];
        
        sort(letters.begin(), letters.end());
        for (char c : letters)
        {
            if (c > target)
                return c;
        }
        return letters[0];
    }
};
