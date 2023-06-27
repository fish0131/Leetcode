class Solution {
public:
    bool judgeCircle(string moves) {
        int right = 0, up = 0;
        for(int i = 0; i < moves.length(); i++) {
            if(moves[i] == 'R') right++;
            if(moves[i] == 'L') right--;
            if(moves[i] == 'U') up++;
            if(moves[i] == 'D') up--;
        }
        if(right == 0 && up == 0) return true;
        else return false;
    }
};
