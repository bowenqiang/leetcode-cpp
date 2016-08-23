class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> myset;
        pair<set<vector<int>>::iterator,bool> ret;
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int target=-nums[i];
            int j=i+1;
            int k=n-1;
            while(k>j)
            {
                int sum=nums[j]+nums[k];
                if(sum==target)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    while(j<k && nums[j]==nums[j+1]){ j++;}
                    while(j<k && nums[k]==nums[k-1]){ k--;}
                    j++;
                    k--;
                }
                else
                {
                    if(sum>target)
                    {
                        k--;
                    }
                    else
                    {
                        j++;
                    }
                }
            }

        }
        return ans;
    }
};
