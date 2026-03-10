class Solution {
public:
    double myPow(double x, int n) {
        long long num=n;
        if(num<0)
        {
            x=1/x;
            num=-num;
        }
        if(num==0)
        return 1;

        double half=myPow(x,num/2);

        if(num%2==0)
        return half*half;
        else 
        return half*half*x;
    }
};