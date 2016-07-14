class Solution {
public:
    int mySqrt(int x) {
        if(x<=1)
            return x;
        int left=1,right=x,middle=0;
        while(left<right)
        {
            middle=left+(right-left)/2;
            if(middle==x/middle) return middle;
            if(middle>x/middle) 
                right=middle-1;
            else
                left=middle+1;
        }
        if(right>x/right)
            return right-1;
        else
            return right;
    }
};
