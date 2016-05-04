typedef struct mystruct
{
    int value;
    int num;
}mystruct;

bool mycmp(mystruct a,mystruct b)
{
    return a.num>b.num;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mymap;
        for(int i=0;i<nums.size();i++)
        {
            mymap[nums[i]]++;
        }
        vector<mystruct> data;
        mystruct *temp=new mystruct();
        for (std::map<int,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it)
        {
            temp->value=it->first;
            temp->num=it->second;
            data.push_back(*temp);
        }
        sort(data.begin(),data.end(),mycmp);
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(data[i].value);
        }
        return ans;
    }
};
