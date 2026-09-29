class Solution {
private:
    int numberOfOnes(vector<int> row)
    {
        int n = 0;
        for (int i : row)
        {
            if (i == 1) ++n;
        }
        return n;
    }
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max = 0;
        for (auto i = 1; i < mat.size(); ++i)
        {
            if (numberOfOnes(mat[i]) > numberOfOnes(mat[max]))    max = i;
        }
        return {max, numberOfOnes(mat[max])};
    }
};