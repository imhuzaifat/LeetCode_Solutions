class Solution {
public:
    bool isPerfectSquare(int num) {
        long int sqrt = 1;
        while (sqrt * sqrt <= num)
        {
            sqrt++;
        }
        --sqrt;
        if (sqrt * sqrt == num)
            return true;
        return false;
    }
};