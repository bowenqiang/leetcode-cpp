class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        //bool ans=false;
        vector<vector<int>> mask(m,vector<int>(n,0));
        for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
            {
                if(wordSearch(board,word,mask,0,i,j))
                    return true;
            }
        return false;
    }
    bool wordSearch(vector<vector<char>>& board,string word,vector<vector<int>> mask,int index,int row,int col)
    {
        if(row<0 || col<0 || row>board.size()-1 || col>board[0].size()-1 || mask[row][col]==1 || word[index]!=board[row][col])
            return false;
        if(index==word.length()-1)
            return true;
        mask[row][col]=1;
        return wordSearch(board,word,mask,index+1,row-1,col) || wordSearch(board,word,mask,index+1,row,col-1) || wordSearch(board,word,mask,index+1,row+1,col) || wordSearch(board,word,mask,index+1,row,col+1);
    }
};
