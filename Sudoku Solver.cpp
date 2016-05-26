class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        getSudoku(board,0);
        
    }
    bool getSudoku(vector<vector<char>>& board,int position)
    {
        if(position==81) {return true;}
        int row=position/9;
        int col=position%9;
        if(board[row][col]=='.')
        {
            for(int i=1;i<=9;i++)
            {
                board[row][col]='0'+i;
                if(check(board,position))
                {
                    if(getSudoku(board,position+1))
                        return true;
                }
                board[row][col]='.';
            }
        }
        else
        {
            if(getSudoku(board,position+1))
                return true;
        }
        return false;
        
        
    }
    bool check(vector<vector<char>>& board,int position)
    {
        int row=position/9;
        int col=position%9;
        int target=board[row][col];
        for(int i=0;i<9;i++)
        {
            if(i!=row)
            {
                if(target==board[i][col])
                    return false;
            }
            if(i!=col)
            {
                if(target==board[row][i])
                    return false;
            }
        }
        int beginX=row/3*3;
        int beginY=col/3*3;
        for(int i=beginX;i<beginX+3;i++)
        {
            for(int j=beginY;j<beginY+3;j++)
            {
                if(i!=row && j!=col)
                {
                    if(target==board[i][j])
                        return false;
                }
            }
        }
        return true;
    }
};
