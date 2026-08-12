class Solution {
public:
    int mySqrt(int x) {
        long int sqrt = 1;
        while (sqrt * sqrt <= x)
        {
            sqrt++;
        }
        return sqrt -1;
    }
};