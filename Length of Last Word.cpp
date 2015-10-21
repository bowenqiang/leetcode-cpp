class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss;
        string last,temp;
        ss.str(s);
        while(1)
        {
            ss>>last;
            if(ss.fail())
            {break;}
        }
        return last.size();
        
    }
};