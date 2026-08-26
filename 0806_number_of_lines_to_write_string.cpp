class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int totalLines = 0, curLinePixels = 0, curPixels = 0;
        for (int i=0; i<s.size(); ++i)
        {
            if (i==0)
                ++totalLines;
            curPixels = widths[(int)(s[i] - 'a')];
            if (curLinePixels + curPixels > 100)
            {
                ++totalLines;
                curLinePixels = 0;
            }
            curLinePixels += curPixels;
        }
        return {totalLines, curLinePixels};
    }
};