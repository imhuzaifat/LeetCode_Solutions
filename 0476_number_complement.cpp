class Solution {
public:
    int findComplement(int num) {
        int comp = 0;
        long int pow = 1;
        while (num != 0 && pow <= 2147483647)
        {
            if (num%2 == 0)
                comp += (1 * pow);
            num /= 2;
            pow *= 2;
        }
        return comp;
    }
};