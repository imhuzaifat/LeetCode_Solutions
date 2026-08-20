class Solution {
public:
    bool isSelfDividing(int num)
    {
        if (num < 10)
            return num;
        int n = num;
        while(n>0)
        {
            if (n%10 == 0)
                return false;
            if ((num % (n%10)) != 0)
                return false;
            n/=10;
        } 
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        while (left <= right)
        {
            if (isSelfDividing(left))
                ans.push_back(left);
            ++left;
        }
        return ans;
    }
};