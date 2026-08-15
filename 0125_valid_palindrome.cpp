class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> plainStr;
        for (int i=0; i<s.size(); ++i)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
                plainStr.push_back(s[i]);
            else if (s[i] >= 'A' && s[i] <= 'Z')
                plainStr.push_back(tolower(s[i]));
        }

        int last = plainStr.size()-1;
        for (int i=0; i<last-i; ++i)
        {
            if (plainStr[i] != plainStr[last-i])
                return false;
        }

        return true;
    }
};