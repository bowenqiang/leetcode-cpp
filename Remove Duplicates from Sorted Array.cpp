
////works but slow, time limit exceeded;
/*class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,counter=0;
        
        while(i!=nums.size()-counter)
        {
            if(nums[i]==nums[i+1])
            {
                counter++;
                int j=i+1;
                while(j!=nums.size()-1)
                {
                    swap(nums[j],nums[j+1]);
                    j++;
                }
            }
            else
            {
                i++;
            }
        }
        return nums.size()-counter;
    }
};*/