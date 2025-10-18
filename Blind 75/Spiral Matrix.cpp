class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        vector<int> res;
        while(top <= bottom && left <= right) {
            //左到右
            for(int i=left; i<=right; i++) {
                res.push_back(matrix[top][i]);
            }
            top++;

            //上到下
            for(int i=top; i<=bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;

            //右到左（需檢查是否還有 row）
            if(top <= bottom) {
                for(int i=right; i>=left; i--) {
                    res.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            //下到上（需檢查是否還有 col）
            if(left <= right) {
                for(int i=bottom; i>=top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return res;
    }
};
