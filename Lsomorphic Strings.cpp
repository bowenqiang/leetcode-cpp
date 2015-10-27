class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        unordered_map<char,char> map1,map2;
        unordered_map<char,char>::iterator it1,it2;
        for(int i=0;i<s.size();i++)
        {
            it1=map1.find(s[i]);
            if(it1==map1.end())
            {
                map1[s[i]]=t[i];
            }
            else
            {
                if(it1->second!=t[i])
                    return false;
            }
            
            it2=map2.find(t[i]);
            if(it2==map2.end())
            {
                map2[t[i]]=s[i];
            }
            else
            {
                if(it2->second!=s[i])
                    return false;
            }
        }

        return true;

        
    }
};
