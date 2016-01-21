class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> map0;
        for(int i=0;i<nums.size();i++)
        {
            try
            {
                int j=map0.at(nums[i]);
                if(abs(j-i)<=k)
                    return true;
                else
                    map0[nums[i]]=i;
            }
            catch(const std::out_of_range)
            {
                map0[nums[i]]=i;
            }
        }
        return false;
        
    }
};
