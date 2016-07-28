class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits=="")
            return ans;
        for(int i=0;i<digits.length();++i)
        {
            if(digits[i]=='1' || digits[i]=='0')
                return ans;
        }
        map<char,string> maps;
        maps['2']="abc";
        maps['3']="def";
        maps['4']="ghi";
        maps['5']="jkl";
        maps['6']="mno";
        maps['7']="pqrs";
        maps['8']="tuv";
        maps['9']="wxyz";
        helper(digits,ans,"",maps,0);
        return ans;
    }
    void helper(string digits,vector<string> &ans,string combination,map<char,string>maps,int length)
    {
        if(length==digits.length())
        {
            ans.push_back(combination);
            return;
        }
        for(int i=0;i<maps[digits[length]].length();++i)
        {
            combination.push_back(maps[digits[length]][i]);
            helper(digits,ans,combination,maps,length+1);
            combination.pop_back();
        }
    }
};
