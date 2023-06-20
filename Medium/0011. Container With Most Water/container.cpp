class Solution {
public:
    int maxArea(vector<int>& height) {
        int minH = 0, res = 0, left = 0, right = height.size()-1;
        // Time Limit Exceeded
        // for(int i = 0; i < height.size()-1; i++) {
        //     for(int j = i + 1; j < height.size(); j++) {
        //         minH = min(height[i], height[j]);
        //         capacity = minH * (j - i);
        //         res = max(res, capacity);
        //     }
        // }
        // return res;
        while(left < right) {
            minH = min(height[left], height[right]);
            res = max(res, minH * (right - left));
            if(height[left] < height[right]) left++;
            else right--;
        }
        return res;
    }
};
