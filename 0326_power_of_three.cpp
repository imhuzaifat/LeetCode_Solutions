class Solution {
public:
    bool isPowerOfThree(int n) {
        double num = n;
        while (num >= 3)
        {
            num /= 3;
        }
        if (num == 1.0)
            return true;
        return false;
    }
};