class Solution {
public:
    int smallestNumber(int n, int t) {
        int digitsProduct, nCopy;
        if (n == 1)
            return t;
        do
        {
            digitsProduct = 1, nCopy = n;
            do
            {
                digitsProduct *= (nCopy%10);
            } while(nCopy /= 10);
            n++;
        } while(digitsProduct % t != 0);
        return n-1;
    }
};