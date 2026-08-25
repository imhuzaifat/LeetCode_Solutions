class Solution {
public:
    bool isPowerOfFour(int n) {
        int p = 0;
        while(pow(4, p) <= n)
        {
            if (pow(4, p) == n)
                return true;
            ++p;
        }
        return false;
    }
};