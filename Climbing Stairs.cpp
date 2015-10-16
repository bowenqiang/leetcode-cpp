/*  version 1 not working very well;result is right, but when the input is large, it will exceed the time limit;
class Solution {
public:
    int climbStairs(int n) {
        int result=0;
        if(n>=2 )
            result=climbStairs(n-2)+climbStairs(n-1);
        else
        {
                return 1;
        }
     return result;       
    }
};
*/
////same as a fibonacci
class Solution {
public:
    int climbStairs(int n) {
        int num[3];
        num[0]=1;
        num[1]=1;
        for(int i=2;i<=n;i++)
        {
            num[i%3]=num[(i-2)%3]+num[(i-1)%3];
        }
        return num[n%3];
    }
};


