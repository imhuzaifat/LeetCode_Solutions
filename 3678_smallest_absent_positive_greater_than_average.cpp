class Solution {
private:
    int average(vector<int>& nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int n : nums)
        {
            sum += n;
        }
        return sum/n;
    }
public:
    int smallestAbsent(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = average(nums) + 1;
        if (n <= 0)  n = 1;
        while(binary_search(nums.begin(), nums.end(), n))
        {
            ++n;
        }
        return n;
    }
};