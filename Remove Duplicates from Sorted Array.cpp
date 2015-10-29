/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len=nums.size();
        if(len<2)
        {
            return len;
        }
        
        int count=0;
        for(int i=0;i<len-count-1;)
        {
            if(nums[i]==nums[i+1])
            {
                nums.push_back(nums[i]);
                nums.erase(nums.begin()+i);
                count++;
                continue;
            }
            i++;
        }
        
        return len-count;
    }
};*/  slow solution;

//fast solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
        {
            return n;
        }
        int length=1;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[length-1])
            {
                nums[length]=nums[i];
                length++;
            }
        }
        return length;
    }
};
