class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = "";
        int vecSize = strs.size();

        for (int i = 0; i < strs[0].length(); i++)
        {
            for (int j = 1; j < vecSize; j++)
            {
                if (strs[0][i] != strs[j][i])
                    return lcp;
            }
            lcp.push_back(strs[0][i]);
        }

        return lcp;
    }
};