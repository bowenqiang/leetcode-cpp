class Solution {
public:
    string getHint(string secret, string guess) {
        int bull=0,cow=0;
        map<char,int> mymap;
        string cache;
        for(int i=0;i<secret.length();i++)
        {
            mymap[secret[i]]++;
        }
        for(int i=0;i<secret.length();i++)
        {
            if(secret[i]==guess[i])
            {
                bull++;
                mymap[secret[i]]--;
                continue;
            }
            cache.push_back(guess[i]);
        }
        for(int i=0;i<cache.length();i++)
        {
            if(mymap[cache[i]]>0)
            {
                cow++;
                mymap[cache[i]]--;
                continue;
            }
        }
        string res=to_string(bull);
        res.push_back('A');
        res+=to_string(cow);
        res.push_back('B');
        return res;
    }
};
