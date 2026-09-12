class Solution {
private:
    bool isEven(int num)
    {
        return !(num % 2);
    }
    int average(vector<int>& nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int n : nums)
        {
            sum += n;
        }
        if (n==0)   return 0;
        return (sum / n);
    }
    bool isDivBy3(int num)
    {
        return (num % 3 == 0);
    }
public:
    int averageValue(vector<int>& nums) {
        vector<int> nDiv3;
        for (int n : nums)
        {
            if (isEven(n))
                if (isDivBy3(n))
                    nDiv3.push_back(n);
        }
        return average(nDiv3);
    }
};