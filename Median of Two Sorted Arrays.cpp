class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int total=n+m;
        if(total & 0x1)
            return findKth(nums1.begin(),m,nums2.begin(),n,total/2+1);
        else
            return (findKth(nums1.begin(),m,nums2.begin(),n,total/2)+findKth(nums1.begin(),m,nums2.begin(),n,total/2+1))/2.0;
        
    }
    //assume m>=n
    int findKth(vector<int>::const_iterator A,int m,vector<int>::const_iterator B,int n,int k)
    {
        if(n>m)
            return findKth(B,n,A,m,k);
        if(n==0)
            return *(A+k-1);
        if(k==1)
            return min(*A,*B);
        int ib=min(k/2,n);
        int ia=k-ib;
        if(*(A+ia-1)>*(B+ib-1))
            return findKth(A,m,B+ib,n-ib,k-ib);
        else if(*(A+ia-1)<*(B+ib-1))
            return findKth(A+ia,m-ia,B,n,k-ia);
        else
            return *(A+ia-1);
        
    }
};
