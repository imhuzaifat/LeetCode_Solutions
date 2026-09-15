class Solution {
private:
    int sumOfDigits(int num)
    {
        int ans = 0;
        while (num != 0)
        {
            ans += (num % 10);
            num /= 10;
        }
        return ans;
    }
public:
    int getLucky(string s, int k) {
        int num = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            int val = s[i] - 'a' + 1;
            while (val != 0)
            {
                num += (val % 10);
                val /= 10;
            }
        }
        for (int i = 1; i < k; ++i)
        {
            num = sumOfDigits(num);
        }
        return num;
    }
};