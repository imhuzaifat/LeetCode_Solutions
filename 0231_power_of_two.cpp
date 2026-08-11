class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i = 0;
        while (n > pow(2, i))   {i++;}
        if (n == pow(2, i)) return true;
        return false;
    }
};