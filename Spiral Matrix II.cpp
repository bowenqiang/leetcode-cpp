class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n,0));
        int start=0,end=n-1;
        int num=1;
        int i,j;
        while(start<end)
        {
        for(j=start;j<end;j++)
        {
            matrix[start][j]=num++;
        }
        for(i=start;i<end;i++)
        {
            matrix[i][end]=num++;
        }
        for(j=end;j>start;j--)
        {
            matrix[end][j]=num++;
        }
        for(i=end;i>start;i--)
        {
            matrix[i][start]=num++;
        }
        start++;
        end--;
        }
        if(start==end)
        {
            matrix[start][end]=n*n;
        }

        return matrix;
    }
};
