class Solution {
public:
    int superPow(int a, vector<int>& b) {
        if(b.empty())
            return 1;
        a=a%1337;
        int lastbit=b.back();
        b.pop_back();
        return superPow(superPow(a,b),10)*superPow(a,lastbit)%1337;
        
    }
    int superPow(int a,int b) {
        int ans=1;
        if(b==0)
            return ans;
        for(int i=0;i<b;i++)
        {
            ans=(ans*a)%1337;
        }
        return ans;
    }
};