class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxSize = 0, count = 0;
        // vector<int> maxLen;
        for(int i = 0; i < rectangles.size(); i++) {
            int side = min(rectangles[i][0], rectangles[i][1]);
            maxLen.push_back(side);
            if(side > maxSize) {
                maxSize = side;
                count = 1;
            }
            else if(side == maxSize) count++;
        }
        // for(auto l: maxLen) {
        //     if(l > maxSize) {
        //         maxSize = l;
        //         count = 1;
        //     }
        //     else if(l == maxSize) count++;
        // }
        return count;
    }
};
