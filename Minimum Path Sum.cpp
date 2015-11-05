class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        if(m==0 || n==0)
            return 0;
        vector<vector<int>> mask(m+1,vector<int>(n+1,INT_MAX));
        for(int i=1;i<mask.size();i++)
        {
            for(int j=1;j<mask[0].size();j++)
            {
                if(i==1&&j==1)
                {
                    mask[i][j]=grid[i-1][j-1];
                }
                else
                {
                mask[i][j]=min(mask[i][j-1],mask[i-1][j])+grid[i-1][j-1];
                cout<<mask[i][j];
                }
            }
        }
        return mask[m][n];
    }
};
