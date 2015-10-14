class Solution {
public:
    int titleToNumber(string s) {
        int size=s.size();
        int result=0;
        for(int i=0;i<size;i++)
        {
            result=((int)s[i]-64)+result*26;
        }
        return result;
    }
};