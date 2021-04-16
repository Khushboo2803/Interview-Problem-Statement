//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
class Solution {
public:
    double myPow(double x, int n) {
        double ret=1;
        for(int i=0;i<n;i++)
            ret*=x;
        return ret;
    }
};