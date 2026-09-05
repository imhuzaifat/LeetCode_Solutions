class Solution {
public:
    int maxPower(string s) {
        char c = s[0];
        int pow = 0, ans = 0;
        for (char ch : s)
        {
            if (c == ch)
            {
                ++pow;
            }
            else
            {
                c = ch;
                pow = 1;
            }
            ans = max(pow, ans);
        }
        return ans;
    }
};