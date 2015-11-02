class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> result;
        if(s.size()<11)
        {
            return result;
        }
        int key=0;
        unordered_map<int,int> map;
        for(int i=0;i<s.size();i++)
        {
            key=((key<<3) | (s[i] & 0x7)) &0x3fffffff;
            if(i<9)
            {continue;}
            unordered_map<int,int>::iterator it=map.find(key);
            if(it==map.end())
            {
                map[key]=1;
            }
            else
            {
                if(it->second==1)
                {
                    result.push_back(s.substr(i-9,10));
                    it->second=2;
                }
            }
        }

        
        return result;
        
    }
};
