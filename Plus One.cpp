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