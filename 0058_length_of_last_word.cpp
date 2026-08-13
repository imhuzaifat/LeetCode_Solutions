class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastLen = 0, curLen = 0, size = s.size();
        for (int i=0; i<=size; i++)
        {
            if (s[i] != ' ' && i<size)
                curLen++;
            else if (s[i] == ' ' || i == size)
            {
                if (curLen != 0)
                    lastLen = curLen;
                curLen = 0;
            }
        }
        return lastLen;
    }
};