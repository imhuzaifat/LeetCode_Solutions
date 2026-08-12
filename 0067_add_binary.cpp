class Solution {
public:
    string addBinary(string a, string b) {
        int al = a.size() - 1;
        int bl = b.size() - 1;
        int carry = 0, sum;
        string ans;
        for (int i = max(al,bl); i>=0; i--)
        {
            sum = ((al >= 0) && (a[al] == '1')) + ((bl >= 0) && (b[bl] == '1')) + carry;
            if (sum == 0)
            {
                ans.push_back('0');
                carry = 0;
            }
            else if (sum == 1)
            {
                ans.push_back('1');
                carry = 0;
            }
            else if (sum == 2)
            {
                ans.push_back('0');
                carry = 1;
            }
            else if (sum == 3)
            {
                ans.push_back('1');
                carry = 1;
            }
            al--;
            bl--;
        }
        if (carry)  ans.push_back('1');

        reverse(ans.begin(), ans.end());
        return ans;
    }
};