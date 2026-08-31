class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = 0, nMax = 0;
        for (int i=0; i<nums.size(); ++i)
        {
            if (nums[i] == 1)
                ++n;
            else if (nums[i] == 0)
                n = 0;
            
            if (n > nMax)
                nMax = n;
        }
        return nMax;
    }
};