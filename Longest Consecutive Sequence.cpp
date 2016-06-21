class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> mymap;
        int longest=0;
        for(auto i:nums)
        {
            mymap[i]=false;
        }
        for(auto i:nums)
        {
            if(mymap[i])
                continue;
            mymap[i]=true;
            int length=1;
            for(int j=i+1;mymap.find(j)!=mymap.end();j++)
            {
                mymap[j]=true;
                length++;
            }
            for(int j=i-1;mymap.find(j)!=mymap.end();j--)
            {
                mymap[j]=true;
                length++;
            }
            longest=max(longest,length);
        }
        return longest;
    }
};
