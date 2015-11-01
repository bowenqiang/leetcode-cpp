class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        if(prices.size()<2)
            return profit;
        bool left=false;  //false goes down, true goes up;
        bool right;
        stack<int>buy;
        stack<int>sell;
        int i;
        for(i=0;i<prices.size()-1;i++)
        {
            if(prices[i]<prices[i+1])
            {
                right=true;
            }
            else
            {
                right=false;
            }
            if(left==false && right==true)
            {
                buy.push(prices[i]);
            }
            if(left==true && right==false)
            {
                sell.push(prices[i]);
            }
            left=right;
        }
        if(left==true)
        {
            sell.push(prices[i]);
        }
        cout<<buy.size()<<" "<<sell.size()<<endl;
        while(!buy.empty())
        {
            profit+=sell.top()-buy.top();
            sell.pop();
            buy.pop();
        }

        
        
        return profit;
    }
};
