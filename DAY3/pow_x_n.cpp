class Solution
{
public:
    double myPow(double x, int n)
    {

        double ans = 1.0;
        long long nn = abs(n);

        while (nn > 0)
        {
            if (nn % 2)
            {
                ans *= x;
                nn--;
            }
            else
            {
                x = x * x;
                nn /= 2;
            }
        }
        if (n < 0)
            return (double)1.0 / ans;
        return ans;
    }
};