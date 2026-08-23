class Solution {
public:
    int bits(int num)
    {
        int bits = 0;
        while (num > 0)
        {
            if (num % 2)
                ++bits;
            num /= 2;
        }
        return bits;
    }
    vector<int> countBits(int n) {
        vector<int> out;
        for (int i=0; i<=n; ++i)
        {
            out.push_back(bits(i));
        }
        return out;
    }
};