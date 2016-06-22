class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        int n=nums.size();
        if(n<4)
            return result;
        sort(nums.begin(),nums.end());
        unordered_map<int,vector<pair<int,int>>>mymap;
        for(size_t i=0;i<n;i++)
            for(size_t j=i+1;j<n;j++)
                mymap[nums[i]+nums[j]].push_back(pair<int,int>(i,j));
                
        for(size_t i=0;i<n;i++)
        {
            for(size_t j=i+1;j<n;j++)
            {
                int key=target-nums[i]-nums[j];
                if(mymap.find(key)==mymap.end())
                    continue;
                auto& value=mymap[key];
                for(size_t k=0;k<value.size();k++)
                {
                    if(value[k].second>=i)
                        continue;
                    result.push_back({nums[value[k].first],nums[value[k].second],nums[i],nums[j]});
                }
            }
        }
        sort(result.begin(),result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
                
        
    }
};
