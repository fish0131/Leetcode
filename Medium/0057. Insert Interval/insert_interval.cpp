class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int n = intervals.size(), current = 0;
        for(int i = 0; i < n; i++) {
            if(intervals[i][1] < newInterval[0]) {
                res.push_back(intervals[i]);
                current ++;
            }
            else if(intervals[i][0] > newInterval[1]) {
                res.push_back(intervals[i]);
            }
            else { // intervals[i][0] <= newInterval[1] or intervals[i][1] >= newInterval[0]
                newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(intervals[i][1], newInterval[1]); 
            }
        }
        res.insert(res.begin() + current, newInterval);
        return res;
    }
};
