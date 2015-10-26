class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        
        vector<int> container;
        while(x/10!=0)
        {
            container.push_back(x%10);
            x=x/10;
        }
        container.push_back(x);
        int n=container.size();
        for(int i=0;i<n/2;i++)
        {
            if(container[i]!=container[n-1-i])
                return false;
        }
        return true;
        
    }
};