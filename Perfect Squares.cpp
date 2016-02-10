class Solution {
public:
    int numSquares(int n) {
        int mask[n+1];
        fill(mask,mask+n+1,INT_MAX);
        for(int i=1;i*i<=n;i++)
        {
            mask[i*i]=1;
        }

        for(int a=1;a<=n;a++)
        {
            for(int b=1;a+b*b<=n;b++)
            {
                mask[a+b*b]=min(mask[a]+1,mask[a+b*b]);
            }
        }
        return mask[n];
        
    }

};
