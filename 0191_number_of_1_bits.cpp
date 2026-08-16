class Solution {
public:
    int hammingWeight(int n) {
        int w;

        while (n > 0)
        {
            w += n % 2;
            n /= 2;
        }

        return w;
    }
};