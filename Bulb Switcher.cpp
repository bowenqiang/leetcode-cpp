class Solution {
public:
    int bulbSwitch(int n) {
        int m=ceil(sqrt(n));
        if(m>sqrt(n))
            return m-1;
        else
            return m;
    }
};
