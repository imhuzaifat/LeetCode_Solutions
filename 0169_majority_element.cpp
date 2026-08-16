class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> uniqueNums = nums;
        uniqueNums.erase(unique(uniqueNums.begin(), uniqueNums.end()), uniqueNums.end());
        
        vector<int> times;
        for (int i=0; i<uniqueNums.size(); ++i)
            times.push_back(0);

        for (int index=0; index<uniqueNums.size(); ++index)
        {
            for (int i=0; i<nums.size(); ++i)
            {
                if (uniqueNums[index] == nums[i])
                    ++times[index];
            }
        }
        
        int maxIndex = distance(times.begin(), max_element(times.begin(), times.end()));
        return uniqueNums[maxIndex];
    }
};