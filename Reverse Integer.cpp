class Solution {
public:
    int reverse(int x) {
        int ans=0;
        while(x/10!=0)
        {
            ans=ans*10+x%10;
            x/=10;
        }
        int temp=ans*10+x;
        if(temp/10!=ans)
            return 0;
        return temp;
    }
};
