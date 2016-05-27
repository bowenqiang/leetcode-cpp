class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            vector<char> temp;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {temp.push_back(board[i][j]);}
            }
            if(!isValidLine(temp))
                return false;
        }
        for(int i=0;i<9;i++)
        {
            vector<char> temp;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]!='.')
                {temp.push_back(board[j][i]);}
            }
            if(!isValidLine(temp))
                return false;
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                vector<char>temp;
                for(int m=0;m<3;m++)
                {
                    for(int n=0;n<3;n++)
                    {
                        if(board[i*3+m][j*3+n]!='.')
                        {
                            temp.push_back(board[i*3+m][j*3+n]);
                        }
                    }
                }
                if(!isValidLine(temp))
                    return false;
            }
        }

        
        return true;
    }
    bool isValidLine(vector<char>& line)
    {
        unordered_set<char> set;
        int size=line.size();
        for(int i=0;i<size;i++)
        {set.insert(line[i]);}
        return set.size()==size; 
    }
};


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int row=0;row<9;row++)
            for(int col=0;col<9;col++)
            {
                int target=board[row][col];
                if(board[row][col]!='.')
                {
                    for(int i=0;i<9;i++)
                    {
                        if(i!=row)
                        {
                            if(board[i][col]==target)
                                return false;
                        }
                        if(i!=col)
                        {
                            if(board[row][i]==target)
                            return false;
                        }
                    }
                    int beginR=row/3*3;
                    int beginC=col/3*3;
                    for(int i=beginR;i<beginR+3;i++)
                    {
                        for(int j=beginC;j<beginC+3;j++)
                        {
                            if(i!=row && j!=col)
                            {
                                if(board[i][j]==target)
                                    return false;
                            }
                        }
                    }
                }
            }
        return true;
    }
};
