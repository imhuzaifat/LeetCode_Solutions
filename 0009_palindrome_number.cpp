class Solution {
public:
    int countDigits(int num)
    {
        int digitCount = 0;
        while (num > 0)
        {
            num /= 10;
            digitCount++;
        }
        return digitCount;
    }

    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        
        int totalDigits = countDigits(x);
        int maxCap = pow(10, (totalDigits - 1));
        
        int xCopy = x;

        for (int i = 0; i < totalDigits / 2; i++)
        {
            if (((x / maxCap) % 10) != (xCopy % 10))
                return false;
            
            maxCap /= 10;
            xCopy /= 10;
        }
        return true;
    }
};