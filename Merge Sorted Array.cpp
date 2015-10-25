class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        queue<int> queue0;
        int i=0,j=0;
        while(i<m && j<n)
        {
            if(nums1[i]<nums2[j])
            {
                queue0.push(nums1[i]);
                i++;
            }
            else
            {
                queue0.push(nums2[j]);
                j++;
            }
        }
        if(i==m)
        {
            while(j<n)
            {
                queue0.push(nums2[j]);
                j++;
            }
        }
        else
        {
            while(i<m)
            {
                queue0.push(nums1[i]);
                i++;
            }
        }
        int k=0;
        while(k<m+n)
        {
            nums1[k++]=queue0.front();
            queue0.pop();
        }
    }
};