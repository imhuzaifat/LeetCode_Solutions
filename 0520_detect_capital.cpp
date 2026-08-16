class Solution {
public:
    bool detectCapitalUse(string word) {
        int i = 1;

        if (word[i] >= 'a' && word[i] <= 'z')
        {
            while (i<word.size())
            {
                if (!(word[i] >= 'a' && word[i] <= 'z'))
                    return false;
                ++i;
            }
        }
        else if (word[i] >= 'A' && word[i] <= 'Z')
        {
            --i;
            while (i<word.size())
            {
                if (!(word[i] >= 'A' && word[i] <= 'Z'))
                    return false;
                ++i;
            }
        }
        return true;
    }
};