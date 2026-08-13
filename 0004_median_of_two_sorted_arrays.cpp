class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> n = nums1;
        for (int i=0; i<nums2.size(); i++)
            n.push_back(nums2[i]);

        sort(n.begin(), n.end());

        if(n.size() % 2)
        {
            return n[n.size() / 2];
        }
        else
        {
            return ((n[(n.size() / 2.0)-1] + n[(n.size() / 2.0)]) / 2.0);
        }
    }
};