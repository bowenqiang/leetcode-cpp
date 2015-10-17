class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        if(numRows==0)
            return triangle;
        triangle.push_back({1});
        if(numRows==1)
            return triangle;
        triangle.push_back({1,1});
        if(numRows==2)
            return triangle;
        for(int i=2;i<numRows;i++)
        {
            vector<int>curr_row;
            curr_row.push_back(1);
            for(int j=1;j<i;j++)
            {
                curr_row.push_back((triangle[i-1])[j-1]+(triangle[i-1])[j]);
            }
            curr_row.push_back(1);
            triangle.push_back(curr_row);
        }
        return triangle;
        
    }
};