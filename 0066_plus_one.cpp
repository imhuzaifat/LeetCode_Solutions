class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> finalAns;
        bool sum = false;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            if (sum)
                finalAns.insert(finalAns.begin(), digits[i]);
            if (!sum)
            {
                if (digits[i] < 9 && digits[i] >= 0)
                {
                    finalAns.insert(finalAns.begin(), digits[i] + 1);
                    sum = true;
                }
                else if (digits[i] == 9)
                {
                    finalAns.insert(finalAns.begin(), 0);
                    if (i == 0)
                        finalAns.insert(finalAns.begin(), 1);
                }
            }
        } 
        return finalAns;       
    }
};