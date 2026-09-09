class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int i = num.size() - 1;

        // Keep looping as long as there are digits in 'num' OR digits left in 'k'
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i]; // Add the current digit of num to k
                i--;
            }
            
            ans.push_back(k % 10); // Take the last digit of the sum
            k /= 10;               // k now acts as the remaining carry/value
        }

        // The digits were added backwards, so reverse the vector at the end
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
