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
