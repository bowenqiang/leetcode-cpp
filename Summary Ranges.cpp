class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> result;
        stringstream out;        
        if(nums.size()==0)
            return result;
        if(nums.size()==1)
        {
            out.str("");
            out<<nums[0];
            result.push_back(out.str());
            return result;
        }
        int start=nums[0];
        int end=nums[0];
        for(int i=1;i<=nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                end=nums[i];
                continue;
            }
            else
            {
                //end=nums[i-1];
                if(start==end)
                {
                    out.str("");
                    out<<(end);
                    result.push_back(out.str());
                    
                    start=nums[i];
                }
                else
                {
                    out.str("");
                    out<<(start)<<"->"<<(end);
                    result.push_back(out.str());
                    
                    start=nums[i];
                }
                end=start;
            }
        }
        if(end!=start)
        {
            out.str("");
            out<<(start)<<"->"<<(end);
            result.push_back(out.str());
        }
        else
        {
            out.str("");
            out<<(end);
            result.push_back(out.str());
        }
        result.pop_back();
        return result;
    }
};