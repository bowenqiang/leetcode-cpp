/// solution 1
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int steps=k%nums.size();
        int temp=0;
        for(int i=0;i<steps;i++)
        {
            temp=nums.back();
            nums.pop_back();
            nums.insert(nums.begin(),temp);
        }
    }
};Enter file contents here
