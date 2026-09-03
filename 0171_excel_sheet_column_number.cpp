class Solution {
public:
    int titleToNumber(string columnTitle) {
        long int base = 1;
        int total = 0, currVal;
        for (int i=columnTitle.size()-1; i>=0; --i)
        {
            currVal = columnTitle[i] - 'A' + 1;
            total += currVal * base;
            base *= 26;
        }
        return total;
    }
};