class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
            if(n==INT_MIN)
            {
                n=INT_MAX;
                return 1.0/(power(x,n)*x);
            }
            else
                return 1.0/power(x,-n);
        }
        else
            return power(x,n);
    }
private:
    double power(double x,int n)
    {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        double temp=power(x,n/2);
        return temp*temp*power(x,n%2);
    }
};
