class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s.size() > t.size())
        {
            int n = s.size();
            for (int i=0; i<n; ++i)
            {
                if (s[i] != t[i])   return s[i];
            }
        }
        else
        {
            int n = t.size();
            for (int i=0; i<n; ++i)
            {
                if (t[i] != s[i])   return t[i];
            }
        }
        return '0';
    }
};