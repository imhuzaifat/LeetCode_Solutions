class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = std::size(nums);

        for (int i=0; i<size; i++)
            if (nums[i] >= target)
                return i;

        return size;
    }
};