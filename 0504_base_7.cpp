class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0)   return "0";
        string ans, isNeg;
        if (num < 0)
        {
            num *= -1;
            isNeg.push_back('-');
        }
        while(num)
        {
            ans.push_back((char)(num % 7) + '0');
            num /= 7;
        }
        std::reverse(ans.begin(), ans.end());
        return isNeg + ans;
    }
};