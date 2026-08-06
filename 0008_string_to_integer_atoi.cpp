class Solution {
public:
    int myAtoi(string s) {
        long long int num = 0;
        int numCount = 0;
        bool isNegative = false;
        
        for (int i = 0; s[i] != '\0' && num <= INT_MAX && ((numCount == 0 && (s[i] == ' ' || s[i] == '-' || s[i] == '+')) || (s[i] >= '0' && s[i] <= '9')); i++)
        {
            if (s[i] == '-')
            {
                isNegative = true;
                numCount++;
            }

            if (s[i] == '+')
            {
                numCount++;
            }

            if (s[i] >= '0' && s[i] <= '9')
            {
                num = (num * 10) + (int)(s[i] - 48);
                numCount++;
            }
        }

        if (isNegative)
            num *= -1;

        if (num > INT_MAX)
            num = INT_MAX;

        if (num < INT_MIN)
            num = INT_MIN;

        return num;
    }
};