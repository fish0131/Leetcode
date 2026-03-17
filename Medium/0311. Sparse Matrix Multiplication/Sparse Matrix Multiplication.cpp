class Solution {
public:
    vector<vector<int>> multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) {
		int m = mat1.size();
		int k = mat1[0].size();
		int n = mat2[0].size();
		
		vector<vector<int>> res(m, vector<int>(n, 0));
		
		for(int i=0; i<m; i++) {
			for(int j=0; j<k; j++) {
				if(mat1[i][j] == 0) continue;
				
				for(int t=0; t<n; t++) {
					res[i][t] += mat1[i][j] * mat2[j][t];
				}
			}
		}
		return res;
    }
};
