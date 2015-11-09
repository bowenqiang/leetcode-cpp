class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>ans;
        int num=0;
        ans.push_back(num);
        for(int i=0;i<n;i++)
        {
            vector<int> buffer;
            for(int j=ans.size()-1;j>=0;j--)
            {
                int temp=ans[j] ^ (int)pow(2,i);
                buffer.push_back(temp);
            }
            ans.insert(ans.end(),buffer.begin(),buffer.end());
        }
        return ans;
        
    }
};
