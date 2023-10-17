class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int maxIncrease = 0, rows = grid.size(), cols = grid[0].size();
	vector<int> rowMax(rows, 0);
	vector<int> colsMax(cols, 0);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			rowMax[i] = max(rowMax[i], grid[i][j]);
			colsMax[j] = max(colsMax[j], grid[i][j]);
		}
	}

	int maxResult = 0;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			maxResult += (min(rowMax[i], colsMax[j]) - grid[i][j]);

	return maxResult;
    }
};