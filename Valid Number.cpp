class Solution {
public:
    bool isNumber(string s) {
        return isNumber(s.c_str());
    }
private:
    bool isNumber(const char *s){
        char *endptr;
        strtod(s,&endptr);
        if(endptr==s) return false;
        for(;*endptr;endptr++)
        {
            if(!isspace(*endptr)) return false;
        }
        return true;
    }
};
