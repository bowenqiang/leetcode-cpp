class NumArray {
public:
    NumArray(vector<int> &nums) {
        int temp=0;
       for(int i=0;i<nums.size();i++)
       {
           temp+=nums[i];
           sums.push_back(temp);
       }
    }

    int sumRange(int i, int j) {
        
        return sums[j]-sums[i-1];
    }
private:
    vector<int> sums;
};


// Your NumArray object will be instantiated and called as such:
// NumArray numArray(nums);
// numArray.sumRange(0, 1);
// numArray.sumRange(1, 2);
