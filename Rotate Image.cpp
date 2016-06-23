class Solution {
    public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int limit = (n-1)/2;
        for(int i=0;i<= limit; i++){
            for(int j=i;j<n-1-i;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = temp;
            }
        }
    }
};
/*
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int row=0;row<n;row++)
        {
            for(int col=row+1;col<n;col++)
            {
                swap(matrix[row][col],matrix[col][row]);
            }
        }
        for(int i=0,j=n-1;i<j;i++,j--)
        {
            for(int k=0;k<n;k++)
            {
                swap(matrix[k][i],matrix[k][j]);
            }
        }
        
        
    }
};
*/
