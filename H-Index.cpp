bool cmp(int x1,int x2)
{
    return x1>x2;
}

class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty())
            return 0;
        sort(citations.begin(),citations.end(),cmp);
        int i=1;
        for(;i<=citations.size();i++)
        {
            if(i>citations[i-1])
                return i-1;
        }
        return i-1;
    }
};
