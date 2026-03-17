class Solution {
public:
    int trap(vector<int>& height) {
        // 某個位置 i 可以接的水量
        // water[i] = min(max_left, max_right) - height[i]
        // 如果結果 < 0 → 設為 0

        // method: teo pointers
        // 思路：水量取決於較小的一邊
        // if leftMax < rightMax --> water = leftMax - height[left]

        int water = 0, left = 0, right = height.size()-1;
        int leftMax = 0, rightMax = 0;
        while(left < right) {
            if(height[left] < height[right]) {
                if(height[left] >= leftMax) leftMax = height[left];
                else water += leftMax - height[left];
                left++;
            }
            else {
                if(height[right] >= rightMax) rightMax = height[right];
                else water += rightMax - height[right];
                right--;
            }
        }
        return water;
    }
};
