class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n = max(num1.size(), num2.size()), nl = min(num1.size(), num2.size()), carry = 0;
        string ans(n, 0);
        for (int i=0; i<nl; ++i)
        {
            int num = 0;
            num = carry + (int)(num1[i] - '0') + (int)(num2[i] - '0');
            carry = 0;
            if (num <= 9)
                ans[i] = (char)(num + '0');
            else
            {
                ans[i] = (char)(num % 10 + '0');
                carry = num / 10;
            }
        }
        for (int i=nl; i<num1.size(); ++i)
        {
            int num = 0;
            num = carry + (int)(num1[i] - '0');
            carry = 0;
            if (num <= 9)
                ans[i] = (char)(num + '0');
            else
            {
                ans[i] = (char)(num % 10 + '0');
                carry = num / 10;
            }
        }
        for (int i=nl; i<num2.size(); ++i)
        {
            int num = 0;
            num = carry + (int)(num2[i] - '0');
            carry = 0;
            if (num <= 9)
                ans[i] = (char)(num + '0');
            else
            {
                ans[i] = (char)(num % 10 + '0');
                carry = num / 10;
            }
        }
        if (carry>0)
        {
            ans.push_back((char)(carry % 10 + '0'));
            carry = 0;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};