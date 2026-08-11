class Solution {
public:
    int sumOfSquaresOfDigits(int num)
    {
        int ans = 0;
        while (num > 0)
        {
            ans += ((num % 10) * (num % 10));
            num /= 10;
        }
        return ans;
    }
    bool isHappy(int n) {
        for (int i=0; i<10; i++)
        {
            if (sumOfSquaresOfDigits(n) == 1)
                return true;
            n = sumOfSquaresOfDigits(n);
        }
        return false;
    }
};