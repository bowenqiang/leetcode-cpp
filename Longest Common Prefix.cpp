class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        if(strs.size()==0)
        {return prefix;}
        prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int length=prefix.size()<strs[i].size()?prefix.size():strs[i].size();
            cout<<length<<endl;
            if(length==0)
            {return "";}
            int j;
            for(j=0;j<length;j++)
            {
                if(prefix[j]!=(strs[i])[j])
                    break;
            }
            prefix=prefix.substr(0,j);
            cout<<prefix<<endl;
        }
            
        return prefix;
    }
};
