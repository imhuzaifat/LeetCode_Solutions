class Solution {
public:
    string convertToTitle(int columnNumber) {
        char currVal;
        string colTitle;
        while (columnNumber)
        {
            if (columnNumber % 26 != 0)
                currVal = columnNumber % 26 + '@';
            else
            {
                currVal = 'Z';
                --columnNumber;
            }
            colTitle.push_back(currVal);
            columnNumber /= 26;
        }
        reverse(colTitle.begin(), colTitle.end());
        return colTitle;
    }
};