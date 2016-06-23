class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    vector<int> stack;
    int carry=1;
    while(!digits.empty())
    {
        stack.push_back((digits.back()+carry)%10);
        carry=(digits.back()+carry)/10;
        digits.pop_back();
    }
    if(carry!=0)
        stack.push_back(carry);
    reverse(stack.begin(),stack.end());
    return stack;
    }
};
/*
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        addOne(digits,1);
        return digits;
        
    }
    void addOne(vector<int>& digits,int c)
    {
        for(auto it=digits.rbegin();it!=digits.rend();it++)
        {
            *it+=c;
            c=*it/10;
            *it=*it%10;
            
        }
        if(c>0) digits.insert(digits.begin(),1);
        
    }
};
*/
