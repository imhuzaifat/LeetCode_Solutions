class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string subStr;
        int l = 0;

        for (char c : s) {
            if (subStr.find(c) != string::npos)
                subStr.erase(0, (subStr.find(c) + 1));

            subStr.push_back(c);

            l = max(l, (int)subStr.length());
        }

        return l;
    }
};