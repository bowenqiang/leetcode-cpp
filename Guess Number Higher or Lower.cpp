// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int lower=1,upper=n,mid;

        while(lower<upper)
        {
            mid=lower+(upper-lower)/2;
            if(guess(mid)==0)
                return mid;
            if(guess(mid)==1)
            {
                lower=mid+1;
            }
            else
            {
                upper=mid-1;
            }
        }
        return upper;
        
    }
};
