class Solution {
public:
    int reverse(int x) {
        long long int num = 0;
        bool isNegative = false;

        if (x <= INT_MIN)
            return 0;

        if (x < 0)
        {
            x *= -1;
            isNegative = true;
        }

        while (x > 0)
        {
            num = (num * 10) + (x % 10);
            x /= 10;
        }

        if (num > INT_MAX)
            return 0;

        if (isNegative)
            num *= -1;

        return num;
    }
};