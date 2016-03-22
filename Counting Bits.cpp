class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        if(num==0)
        {
            res.push_back(0);
            return res;
        }
        res.push_back(0);
        int m=0;
        for(int i=1;i<=num;i++)
        {
            if(i<pow(2,m+1))
            {
                int val=res[i-pow(2,m)]+1;
                res.push_back(val);
            }
            else
            {
                m++;
                res.push_back(1);
            }
            
        }
        

        return res;
        
    }
};
