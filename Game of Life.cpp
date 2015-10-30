class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row=board.size();
        int col=board[0].size();
        if(col==0)
        {
            return;
        }
        vector<vector<int>> padding(row+2);
        for(int i=0;i<row+2;i++)
        {
            if(i==0 || i==row+1)
            {
                vector<int> temp(col+2,0);
                padding[i].insert(padding[i].end(),temp.begin(),temp.end());
            }
            else
            {
                padding[i].push_back(0);
                padding[i].insert(padding[i].end(),board[i-1].begin(),board[i-1].end());
                padding[i].push_back(0);
            }
        }
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                int val=padding[i][j]+padding[i][j+1]+padding[i][j+2]+padding[i+1][j]+padding[i+1][j+2]+padding[i+2][j]+padding[i+2][j+1]+padding[i+2][j+2];
                if(board[i][j]==1)
                {
                    if(val<2)
                    {
                        board[i][j]=0;
                        continue;
                    }
                    if(val>3)
                    {
                        board[i][j]=0;
                        continue;
                    }
                }
                else
                {
                    if(val==3 && board[i][j]==0)
                    {
                        board[i][j]=1;
                        continue;
                    }
                }
            }
        }
        
        
    }
};
