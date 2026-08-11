class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long N = n;

        if (N < 0)  N *= -1;    // For Negative Exponents

        while (N > 0)           // This loop works on this logic
        {                       // 2 ^ 13 = (2 ^ 8) * (2 ^ 4) * (2 ^ 1)
            if (N % 2 == 1)
                ans *= x;
            x *= x;
            N /= 2;
        }

        if (n < 0)  return (1 / ans);   // Negative Exponents
        return ans;
    }
};