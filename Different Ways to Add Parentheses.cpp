class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> result;
        int length=input.length();
        for(int idx=0;idx<length;idx++)
        {
            if(input[idx]=='+' || input[idx]=='-' || input[idx]=='*')
            {
                vector<int> result1=diffWaysToCompute(input.substr(0,idx));
                vector<int> result2=diffWaysToCompute(input.substr(idx+1));

            for(vector<int>::iterator i=result1.begin();i!=result1.end();i++)
                for(vector<int>::iterator j=result2.begin();j!=result2.end();j++)
                {
                    if(input[idx]=='+')
                        result.push_back((*i)+(*j));
                    else if(input[idx]=='-')
                    {
                        result.push_back((*i)-(*j));
                    }
                    else
                    {
                        result.push_back((*i)*(*j));
                    }
                }
            }
        }
        if(result.empty())
            result.push_back(atoi(input.c_str()));
        return result;
        
    }
};
