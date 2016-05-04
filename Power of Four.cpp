class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num>0 && !(num&(num-1)))
        {
            int Num0=0;
            while(num>0)
            {
                Num0+=!(num & 1);
                num>>=1;
            }
            cout<<Num0;
            if(Num0%2==0)
            {
                return true;
            }
            else
            {
                return false;
            }

            
        }
        else
        {
            return false;
        }
    }
};
