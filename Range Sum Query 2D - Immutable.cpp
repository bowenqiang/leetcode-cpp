class NumMatrix {
public:
	NumMatrix(vector<vector<int>> &matrix) {
		if (matrix.empty())
		{
			isEmpty = true;
			return;
		}
		else
		{
			isEmpty = false;
		}
		int m = matrix.size();
		int n = matrix[0].size();
		M = vector<vector<int>>(m+1, vector<int>(n+1, 0));
		for (int i = m-1; i >=0; i--)
		{
			for (int j = n-1; j >=0; j--)
			{
				M[i][j]=matrix[i][j]+ M[i+1][j] + M[i][j+1] - M[i+1][j+1];
			}
		}
		
	}

	int sumRegion(int row1, int col1, int row2, int col2) {
		if (isEmpty)
			return 0;
		else
		{
			cout << M[row1][col1] << "-" << M[row1][col2 + 1] << "-" << M[row2 + 1][col1] << "+" << M[row2 + 1][row2 + 1] << endl;
			return (M[row1][col1] - M[row1][col2 + 1] - M[row2 + 1][col1] + M[row2 + 1][col2 + 1]);
		}
	}
private:
	vector<vector<int>> M;
	bool isEmpty;
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);
